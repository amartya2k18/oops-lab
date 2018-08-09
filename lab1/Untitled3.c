#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,s1;
float s;
scanf("%d",&a);
scanf("%d",&b);
a=(a*10)+a;
b=(b*10)+b;
c=(a*100)+b;
s=sqrt(c);
s1=sqrt(c);
if(s==s1)
printf("\nperfect square%f",s);
else
printf("not perfect");
}
