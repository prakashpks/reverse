# reverse
#include<stdio.h>
void main()
{
int a,b1,num=0;
printf("enter number");
scanf("%d",a);
while(a!=0)
{
b1=a%10;
num=num*10+b1;
a=a/10;
}
printf(num);
}
