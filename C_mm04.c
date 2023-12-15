#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d-%d=%d\n", a, b, a-b);
    int c = a%b;
    printf("%d/%d=%d...%d\n", a, b, c<0?a/b-1:a/b, c<0?c+b:c);
}
