#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[20];
    float fee;
};
struct student input(int c)
{
    struct student s;
    printf("Enter roll no, name and fees of the student %d\n", c);
    scanf("%d", &s.rollno);
    fflush(stdin);
    fgets(s.name, 20, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    scanf("%f", &s.fee);
    return s;
}
void display(struct student s)
{
    printf("\n|%d | %s | %.1f|", s.rollno, s.name, s.fee);
}
int main()
{
    struct student s[10];
    int i, count = 1;
    printf("Enter details of 10 students\n");
    for (i = 0; i < 10; i++)
    {
        s[i] = input(count);
        count++;
    }
    for (i = 0; i < 10; i++)
        display(s[i]);
    return 0;
}