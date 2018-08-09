#include<stdio.h>
int main()
{
int i,j=0;
scanf("%d",&i);
while(i>0)
{
i=i/10;
j++;
}
printf("\n%d",j);
}
