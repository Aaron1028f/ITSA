#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF)
    {
        int len;
        len = x*x + y*y;
        len = sqrt(len);
        if(len <= 100)
            printf("inside\n");
        else
            printf("outside\n");
    }
}