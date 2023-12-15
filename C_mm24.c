#include<stdio.h>
#include<stdlib.h>

int main()
{
    double time, pay;
    while(scanf("%lf %lf", &time, &pay) != EOF)
    {
        double total = 0;
        if(time <= 60)
        {
            total = time * pay;
        }
        else if(time <= 120)
        {
            total += 60 * pay;
            time -= 60;
            total += time * pay * 1.33;
        }
        else 
        {
            total = 60 * pay;
            total += 60 * pay * 1.33;
            time -= 120;
            total += time * pay * 1.66;
        }
        printf("%.1lf\n", total);
    }
}