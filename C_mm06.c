#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double input;
    while(scanf("%lf", &input) != EOF)
        printf("%.1lf\n", round(input*1.6*10)/10.0);
}