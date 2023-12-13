#include <stdio.h>
int main()
{
   double element_1[8];
   double element_2[8];
   for (int i = 0; i < 8; i++)
   {
      scanf("%lf", &element_1[i]);
      printf("%lf", element_1[i]);
   }
   double x = 0;
   for (int i = 0; i < 8; i++)
   {
      x += element_1[i];
      element_2[i] = x;
      printf("%lf", element_2[i]);
   }
   return 0;
}