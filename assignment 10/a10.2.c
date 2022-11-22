#include<stdio.h>
float simple(float p, float r, float t);
int main()
{
    float p,r,t,s;
    printf("Enter the amount:\n");
    scanf("%f",&p);
    printf("Enter the rate:\n");
    scanf("%f",&r);
    printf("Enter the time interval:\n");
    scanf("%f",&t);
    s=simple(p,r,t);
    printf("Simple interest is %f",s);
     return 0;
}
float simple(float p, float r, float t)
{
    return (p*r*t)/100;
}
