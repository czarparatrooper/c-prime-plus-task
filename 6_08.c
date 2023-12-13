#include <stdio.h>
int main(void)
{
    double num1, num2;
    printf("Enter two floating-point numbers: ");
    while (scanf("%lf %lf", &num1, &num2) == 2)
    {
        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f\n", num1, num2, num1, num2, (num1 - num2) / (num1 * num2));
        printf("Enter two floating-point numbers (q to quit): ");
    }
    printf("Bye!\n");
    return 0;
}