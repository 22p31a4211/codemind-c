#include<stdio.h>
void height (int a)
{
float b;
b=2.54*a;
printf("%.2f",b);
}
int main()
{
int a;
scanf("%d",&a);
height(a);
}
