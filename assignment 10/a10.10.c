#include<stdio.h>
void primefactor(int x);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    primefactor(n);
    return 0;
}
void primefactor(int x)
{
    int i,j,p;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            p=1;
            for(j=2;j<i/2;j++)
            {
                if(i%j==0)
                {
                   p=0;
                   break;
                }

            }
            if(p==1)
            {
                printf("%d ",i);
            }
        }
    }
}
