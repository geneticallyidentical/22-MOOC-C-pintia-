#include<stdio.h>
int main()
{int a;
 int b;
scanf("%d %d",&a,&b);
float c=b;
printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n",a,b,a+b,a,b,a-b,a,b,a*b);
if(a%b==0)
printf("%d / %d = %d",a,b,a/b);
else 
printf("%d / %d = %.2f",a,b,a/c);
return 0;
}
