#include <stdio.h>
#include<string.h>
#include "1DefineEmployee.c"
struct Employee input();
int main()
{
    struct Employee e1;
    e1 = input();

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