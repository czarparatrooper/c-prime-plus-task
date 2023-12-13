#include <stdio.h>
int main()
{
    char element[26];
    for (int i = 0; i < 26; i++)
    {
        element[i] = 'a' + i;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", element[i]);
    }
    printf("\n");
}