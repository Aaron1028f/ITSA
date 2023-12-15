#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int hundred = a / 100;
    int tenth = a % 100;
    int ten = tenth / 10;
    int one = tenth % 10;
    if(a == one*one*one + ten*ten*ten + hundred*hundred*hundred)
        printf("Yes\n");
    else
        printf("No\n");
}