#include<stdio.h>
int factorial(int x)
{
    int i,r=1;
    for(i=1;i<=x;i++)
    {
        r=r*i;
    }
    return r;
}
int combination(int n,int r);
int main()
{
    int n,r,R;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the value of r:\n");
    scanf("%d",&r);
    R=combination(n,r);
    printf("Result is %d",R);
    return 0;
}
int combination(int n,int r)
{
    int a,t,R;
    a=factorial(n);
    t=factorial(n-r);
    R=a/t;
    return R;


}

