#include <stdio.h>
int main(void)
{
    int num[8];
    printf("Enter 8 integers: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Here are the integers in reverse order: ");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    return 0;
}