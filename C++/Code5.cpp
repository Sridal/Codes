//Area of Circle
#include<stdio.h>
int circumference(float);
int main()
{
	float r, C;
    printf("Enter the number:");
    scanf("%2f",&r);
    C=circumference(r);
    printf("Circumference=%f",C);
    return(0);
}
int circumference(float r)
{
    float C;
    C=2*3.14*r;
    return(C);
}
