//Comparing two numbers
#include<stdio.h>
#include<stdlib.h>
int cheak(int);
int main()
{
    int n,c;
    printf("Enter the number:");
    scanf("%d",&n);
    c=cheak(n);
    return(0);
}
int cheak(int n)
{
    if(n%2==0)
    {
        printf("the number %d is even",n);
    }
    else
    {
        printf("The number %d is odd",n);
    };
    return(n);
}
