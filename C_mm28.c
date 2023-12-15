#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        if(i % 5 == 0 && i % 7 == 0)
        {
            if(flag-- == 1) printf("%d", i);
            else printf(" %d", i);
        }
    printf("\n");
}