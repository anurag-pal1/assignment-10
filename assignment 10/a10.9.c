#include<stdio.h>
int check(int x,int y);
int main()
{
    int n,d,R;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Enter a digit:\n");
    scanf("%d",&d);
    R=check(n,d);
    if(R==1)
    {
        printf("Number contains the digit.");
    }
    else
    {
        printf("Number not contain the digit.");
    }
    return 0;
}
int check(int x,int y)
{
    int r;
    while(x!=0)
    {
        r=x%10;
        if(r==y)
        {
            return 1;
        }
        else
        {
            x=x/10;
        }
    }
}
