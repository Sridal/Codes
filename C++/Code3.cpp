//Find greatest among 3 numbers
#include<stdio.h>
int cheak(int,int,int);
int main()
{
	int a,b,c;
    printf("Enter the numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    cheak(a,b,c);
    return(0);
}
int cheak(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("%d is greatest",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is greatest",b);
    }
    else
    {
        printf("%d is greatest",c);
    }
    return(0);
}
