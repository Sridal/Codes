//Area of Circle
#include<stdio.h>
int area(int);
int main()
{
	int r;
    float a;
    printf("Enter the number:");
    scanf("%d",&r);
    a=area(r);
    printf("Area=%.2f",a);
    return(0);
}
int area(int r)
{
    float A;
    A=3.14*r*r;
    return(A);
}
