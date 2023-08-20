#include <stdio.h>
struct Time
{
    int hour, min, sec;
};
struct Time timeDiff(struct Time start, struct Time end)
{
    struct Time diff;
    if (start.sec > end.sec)
    {
        end.sec += 60;
        end.min -= 1;
    }
    if (start.min > end.min)
    {
        end.min += 60;
        end.hour -= 1;
    }
    diff.sec = end.sec - start.sec;
    diff.min = end.min - start.min;
    diff.hour = end.hour - start.hour;
    return diff;
}
void display(struct Time t)
{
    printf("Difference in time is: %d hour %d minutes %d seconds",t.hour,t.min,t.sec);
}
int main()
{
    struct Time start, end, diff;
    printf("Enter starting time in hour, minutes and second format:\n");
    scanf("%d%d%d", &start.hour, &start.min, &start.sec);
    printf("Enter ending time in hour, minutes and second format:\n");
    scanf("%d%d%d", &end.hour, &end.min, &end.sec);
    diff = timeDiff(start, end);
    display(diff);
    return 0;
}