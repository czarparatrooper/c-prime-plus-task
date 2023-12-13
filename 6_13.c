#include <stdio.h>
#include <math.h>
int main(void)
{
    unsigned int element[8];
    for (int i = 0; i < 8; i++)
    {
        element[i] = pow(2, i + 1);
    }
    for (int i = 7; i > 0; i--)
    {
        printf("%u ", element[i]);
    }
    printf("\n");
    return 0;
}