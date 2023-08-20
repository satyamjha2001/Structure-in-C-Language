// #include"2InputEmployeeDataFromUser.c"
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
struct Employee input();
struct Employee display(struct Employee);
int main() {
  struct Employee e1;
    e1 = input();
    display(e1);
    return 0;
return 0;
}
struct Employee input()
{
    struct Employee e;
    printf("Enter employee id: \n");
    scanf("%d", &e.id);
    printf("Enter employee's name: \n");
    fflush(stdin);    
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    printf("Enter employee's salary: \n");
    scanf("%d", &e.salary);
    return e;
}
struct Employee display(struct Employee e)
{
    printf("%d %s %d",e.id,e.name,e.salary);
}