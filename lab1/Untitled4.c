#include<stdio.h>
int s=1;
int factorial(int n)
{


s=s*n;
if(n==1)
    return s;
    else
factorial(n-1);

}

int main()
{
int i;
scanf("%d",&i);
factorial(i);
printf("%d",s);
}
