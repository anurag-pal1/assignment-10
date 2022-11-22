#include<stdio.h>
#define PI 3.14
float area(float x);
int main()
{
    float r,A;
    printf("Enter radius of circle:\n");
    scanf("%f",&r);
    A=area(r);
    printf("Area of circle is %f\n\n",A);
    return 0;
}
float area(float r)
{
    return PI*r*r;
}
