#include<stdio.h>
#include<stdlib.h>

int main()
{
    double b, h;
    while(scanf("%lf %lf", &b, &h) != EOF)
    {
        double output = b*h / 2;
        printf("%.1lf\n", output);
    }
    
}
