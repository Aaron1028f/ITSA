#include<stdio.h>
#include<stdlib.h>

int main()
{
    double u, b, h;
    while(scanf("%lf %lf %lf", &u, &b, &h) != EOF)
    {
        double output = (u + b) * h / 2;
        printf("Trapezoid area:%.1lf\n", output);
    }
}
