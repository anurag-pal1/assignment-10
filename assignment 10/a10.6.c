#include<stdio.h>
int factorial(int x);
int main()
{
    int n,f;
    printf("Enter a number:\n");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of given number is %d",f);
    return 0;
}
int factorial(int x)
{
    int i,r=1;
    for(i=1;i<=x;i++)
    {
        r=r*i;
    }
    return r;
}
