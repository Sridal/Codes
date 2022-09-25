//CALCULATOR FOR 2 NUMBERS
#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub1(int,int);
int sub2(int,int);
int mul(float,float);
int dev1(float,float);
int dev2(float,float);
int main()
{
	float a, b;
    int ch;
    float r;
    printf("Enter the numbers:\n");
    scanf("%f %f",&a,&b);
    printf("The following are available:\n1;Add the numbers\n2;Sub the first from second\n3;Sub the second from first\n4;Multiply both numbers\n5;Devide first by second\n6;Devide second by first\n");
    printf("Please ENTER your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            add(a,b);
            break;
        case 2:
            sub1(a,b);
            break;
        case 3:
            sub2(a,b);
            break;
        case 4:
            mul(a,b);
            break;
        case 5:
            dev1(a,b);
            break;
        case 6:
            dev2(a,b);
            break;
        default:
            printf("WOW! You're an idiot, aren't you?");
            break;
    }
    system("clear");
    return(0);
}
int add(int a,int b)
{
 int r;
 r=a+b;
 printf("Result:%d",r);
 return(0);
}
int sub1(int a,int b)
{
 int r;
 r=a-b;
 printf("Result:%d",r);
 return(0);
}
int sub2(int a,int b)
{
 int r;
 r=b-a;
 printf("Result:%d",r);
 return(0);
}
int mul(float a,float b)
{
 float r;
 r=a*b;
 printf("Result:%.2f",r);
 return(0);
}
int dev1(float a,float b)
{
 float r;
 r=a/b;
 printf("Result:%.2f",r);
 return(0);
}
int dev2(float a,float b)
{
 float r;
 r=b/a;
 printf("Result:%.2f",r);
 return(0);
}