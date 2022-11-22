#include<stdio.h>
void natural(int x);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int x)
{
    int i,a=1;
    for(i=1;i<=2*x;i=i+2)
    {
        printf("%d\n",i);
    }
}



