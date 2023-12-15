#include<stdio.h>
#include<stdlib.h>

int main()
{
    int input;
    scanf("%d", &input);
    unsigned int n = input;
    for (int i = 7; i >= 0; i--) 
        printf("%d", (n >> i) & 1);
    printf("\n");
}