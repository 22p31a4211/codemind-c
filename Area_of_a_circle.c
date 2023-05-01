#include <stdio.h>

int main() {
   double radius, area;
   const double pi = 3.14;


   scanf("%lf", &radius);

   area = pi * radius * radius;

   printf("%.2lf", area);

   return 0;
}
