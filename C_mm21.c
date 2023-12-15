#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long n, table[30] = {1, 1, 0};
    scanf("%lld", &n);
    for(int i = 2; i <= 20; i++)
        table[i] = i * table[i-1];
    printf("%lld\n", table[n]);
}