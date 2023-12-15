#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[150] = {0}, i = -1, sum = 0;
    while(scanf("%d", &arr[++i]) != EOF)
        sum += arr[i] * arr[i] * arr[i];
    printf("%d\n", sum);
}