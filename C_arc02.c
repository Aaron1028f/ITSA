#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[150] = {0}, i = -1, flag = 1;
    while(scanf("%d", &arr[++i]) != EOF){}
    while(i > 0)
    {
        if(flag-- == 1) printf("%d", arr[--i]);
        else printf(" %d", arr[--i]);
    }
    printf("\n");
}