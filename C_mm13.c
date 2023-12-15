#include<stdio.h>
#include<stdlib.h>

int main()
{
    int start_hour, start_min, end_hour, end_min;
    scanf("%d %d %d %d", &start_hour, &start_min, &end_hour, &end_min);
    int d = (end_hour * 60 + end_min) - (start_hour * 60 + start_min);
    int times, output;
    if(d <= 120)
    {
        times = d / 30;
        // if(d % 30) times++;
        output = times * 30;
        printf("%d\n", output);
    }
    else if(d <= 240)
    {
        d -= 120;
        times = d / 30;
        // if(d % 30) times++;
        output = 120 + times * 40;
        printf("%d\n", output);
    }
    else
    {
        d -= 240;
        times = d / 30;
        // if(d % 30) times++;
        output = 120 + 160 + times * 60;
        printf("%d\n", output);
    }

}