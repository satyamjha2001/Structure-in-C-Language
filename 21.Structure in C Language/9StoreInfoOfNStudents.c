#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[20];
    float fee;
};
void input(struct student *s,int c)
{
    
    printf("Enter roll no, name and fees of the student %d\n", c);
    scanf("%d", &s->rollno);
    fflush(stdin);
    fgets(s->name, 20, stdin);
    s->name[strlen(s->name) - 1] = '\0';
    scanf("%f", &s->fee);
}
void display(struct student *s)
{
    printf("\n|%d | %s | %.1f|",s->rollno, s->name, s->fee);
}
int main()
{   int n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    struct student s[n];
    int i, count = 1;
    printf("Enter details of %d students\n",n);
    for (i = 0; i < n; i++)
    {
        input(&s[i],count);
        count++;
    }
    for (i = 0; i < n; i++)
        display(&s[i]);
    return 0;
}