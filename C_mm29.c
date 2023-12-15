#include<stdio.h>
#include<stdlib.h>

int is_prime(int a)
{
    if(a <= 1) return 0;
    for(int i = 2; i*i < a; i++)
        if(a % i == 0)
            return 0;
    return 1;
}

int main()
{
    int num;
    scanf("%d", &num);
    for(int i = num-1; i > 0; i--)
        if(is_prime(i))
        {
            printf("%d\n", i);
            return 0;
        }
}