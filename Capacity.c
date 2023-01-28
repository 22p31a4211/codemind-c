#include<stdio.h>
void cpkb(int S,int T,int B)
{
float cp,cpkb;
cp=2*S*T*B*512;
cpkb=cp/1024;
printf("%.f KB",cpkb);
}
int main()
{
int S,T,B;
scanf("%d%d%d",&S,&T,&B);
cpkb(S,T,B);
}

