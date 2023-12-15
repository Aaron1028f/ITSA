#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        int n, m, arr[150][150] = {0};
        scanf("%d %d", &n, &m);
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                scanf("%d", &arr[j][k]);
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                if(arr[j][k] == 0 || arr[j+1][k] + arr[j][k+1] + arr[j-1][k] + arr[j][k-1] == 4)
                    printf("_ ");
                else printf("0 ");
            }
            printf("\n");
        }
        if(i + 1 != num) printf("\n");
    }
}