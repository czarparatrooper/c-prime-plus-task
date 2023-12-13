#include <stdio.h>
int main(void)
{
    char x;
    printf("Please enter a capital letter: ");
    scanf("%c", &x);
    for (int i = 0; i < x - 'A' + 1; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            printf("%c", 'A' + j);
        }
        for (int y = 0; y < i ; y++)
        {
            printf("%c", 'A' + i - y - 1);
        }
        printf("\n");
    }
    return 0;
}