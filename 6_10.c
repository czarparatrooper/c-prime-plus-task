#include <stdio.h>
int main(void)
{
    int num_min, num_max;
    while (1) 
    {
        printf("Enter the lower and upper integer limits (first < second): ");
        scanf("%d %d", &num_min, &num_max);
        if (num_min >= num_max)
        {
            printf("Invalid input: The first number must be smaller than the second number.\n");
            break;
        }
        int sum = 0;
        for (int i = num_min; i <= num_max; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n", num_min * num_min, num_max * num_max, sum);
    }
    printf("Done\n");
    return 0;
}
