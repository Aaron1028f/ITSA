#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sec, day_num, hour_num, min_num;
    scanf("%d", &sec);
    day_num = sec / 86400;
    sec %= 86400;
    hour_num = sec / 3600;
    sec %= 3600;
    min_num = sec / 60;
    sec %= 60;
    printf("%d days\n", day_num);
    printf("%d hours\n", hour_num);
    printf("%d minutes\n", min_num);
    printf("%d seconds\n", sec);
}