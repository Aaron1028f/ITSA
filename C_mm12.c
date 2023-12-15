#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double d;
    scanf("%lf", &d);
    int a = d/((100-(2.54*30))/100);
    printf("%d\n", a+1);
}
// 100t = 2.54 * 30 t + d
// d = (100-(2.54*30))t
// t = d/(100-(2.54*30))