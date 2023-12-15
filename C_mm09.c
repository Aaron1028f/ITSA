#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double i;
    scanf("%lf", &i);
    if(i > 31) 
    {
        printf("Value of more than 31\n");
        return 0;
    }
    int a = pow(2, i);
    printf("%d\n", a);
}