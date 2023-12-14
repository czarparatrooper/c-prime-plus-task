#include<stdio.h>
int main(void)
{
    double Daphne = 100.0, Deirdre = 100.0;
    for (;Daphne > Deirdre;)
    {
        Daphne += 100 * 0.1;
        Deirdre += Deirdre * 0.05;
    }
    printf("Daphne: %.2f\nDeirdre: %.2f\n", Daphne, Deirdre);
    return 0;
}