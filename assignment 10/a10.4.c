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
    int i;
    for(i=1;i<=x;i++)
    {
        printf("%d\n",i);
    }
}


