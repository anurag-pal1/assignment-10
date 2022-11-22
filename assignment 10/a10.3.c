#include<stdio.h>
int check(int x);
int main()
{
    int n,c;
    printf("Enter a number:\n");
    scanf("%d",&n);
    c=check(n);
    printf("%d",c);
    return 0;
}
int check(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
