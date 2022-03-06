#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int time1=a/100*60+a%100;
int time2=time1+b;
printf("%03d",time2/60*100+time2%60);
return 0;
}
