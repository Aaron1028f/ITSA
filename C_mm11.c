#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d", &a);
    int sum = 0;
    sum += a / 10;
    printf("NT10=%d\n", a/10);
    a %= 10;
    sum += a / 5;
    printf("NT5=%d\n", a/5);
    a %= 5;
    sum += a;
    printf("NT1=%d\n", a);

}