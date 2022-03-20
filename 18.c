#include<stdio.h>
int main()
{
double km;
int min;
scanf("%lf %d",&km,&min);
if(km<=3)
printf("%.f",10.0+min/5*2);
if(km>3&&km<=10)
printf("%.f",10+(km-3)*2+min/5*2);
if(km>10)
printf("%.f",24+(km-10)*3+min/5*2);
return 0;
}
