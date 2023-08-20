#include <stdio.h>
#include <string.h>
struct marks
{
    int rollno;
    char name[20];
    float chem, maths, phy;
};
struct marks input(int c)
{
    struct marks m;
    printf("Enter roll no, name, chemistry marks, maths marks and physics marks of the student %d out of 100:\n", c);
    scanf("%d", &m.rollno);
    fflush(stdin);
    fgets(m.name, 20, stdin);
    m.name[strlen(m.name) - 1] = '\0';
    scanf("%f%f%f", &m.chem, &m.maths, &m.phy);
    return m;
}
void display(struct marks m)
{
    printf("\n%d %s %.2f %.2f %.2f", m.rollno, m.name, m.chem, m.maths, m.phy);
}
void percent(struct marks m)
{ 
    float p=(m.chem+m.maths+m.phy)/3.0;
    printf("\nPercentage = %.2f",p);

}
int main()
{
    struct marks m[5];
    int i, count = 1;
    printf("Enter details of 5 students\n");
    for (i = 0; i < 5; i++)
    {
        m[i] = input(count);
        count++;
    }
    for (i = 0; i < 5; i++)
    {    display(m[i]);
         percent(m[i]);        
    }    
    return 0;
}