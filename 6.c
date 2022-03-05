#include<stdio.h>

int main()
{
 int a;
 scanf("%d",&a);
 float b=a/30.48;
 int foot=b;
 int inch=(b-foot)*12;
 printf("%d %d",foot,inch);
 return 0;
}

