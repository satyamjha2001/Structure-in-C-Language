#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input()
{
    struct Employee e;
    printf("Enter employee id: \n");
    scanf("%d", &e.id);
    printf("Enter employee's name: \n");
    fflush(stdin);
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name) - 1] = '\0';
    printf("Enter employee's salary: \n");
    scanf("%f", &e.salary);
    return e;
}
void display(struct Employee e)
{
    printf("\n%d %s %.2f", e.id, e.name, e.salary);
}
void sortSalary(struct Employee e[], int size)
{
    int i, r;
    struct Employee t;
    for (r = 1; r < size; r++)
    {
        for (i = 0; i < size - r; i++)
        {
            if (e[i].salary < e[i + 1].salary)
            {
                t = e[i];
                e[i] = e[i + 1];
                e[i + 1] = t;
            }
        }
    }
}
int main()
{
    struct Employee e[10];
    printf("ENTER EMPLOYEES INFORMATION TO SORT THEM ACCORDING TO THEIR SALARY\n");
    for (int i = 0; i < 10; i++)
        e[i] = input();
    sortSalary(e, 10);
    for (int i = 0; i < 10; i++)
        display(e[i]);
    return 0;
}
