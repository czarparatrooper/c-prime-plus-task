#include <stdio.h>
int main(void)
{
    double money = 100.0;
    int year = 0;
    while (money > 0.0)
    {
        money += money * 0.08;
        money -= 10.0;
        year++;
    }
    printf("After %d years, Chuckie Lucky's money is gone.\n", year);
}