#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input();
struct Employee display(struct Employee);
void highestSalary(struct Employee e[], int);
void sortSalary(struct Employee e[], int);
int main()
{
    struct Employee e[10];
    for (int i = 0; i < 10; i++)
        e[i] = input();
    highestSalary(e, 10);
    for (int i = 0; i < 10; i++)
        display(e[i]);
    return 0;
}
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
struct Employee display(struct Employee e)
{
    printf("\n%d %s %f\n", e.id, e.name, e.salary);
}
void highestSalary(struct Employee e[], int size)
{
    float max = e[0].salary;
    char name[20];
    for (int i = 1; i < size; i++)
    {
        if (max < e[i].salary)
            max = e[i].salary;
        strcpy(name, e[i].name);
    }
    printf("\n%s having the highest salary of %.2f", name, max);
}