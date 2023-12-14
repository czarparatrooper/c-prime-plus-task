#include <stdio.h>
int main(void)
{
    int friends = 5;
    int week = 1;
    for (; friends <= 150; week++)
    {
        friends -= week;
        friends *= 2;
    }
    printf("After %d weeks, Chuckie Lucky has %d friends.\n", week, friends);
}