#include<stdio.h>
// program to find the sum of last k digits of a number.
int main()
{
    int n,k,sum=0,i;
    printf("Enter an Integer and a num");
    scanf("%d%d",&n,&k); //21367  3
    for(i=1;i<=k;i++)
    {
        sum=sum+(n%10); //0+7
        n/=10; //21367/10=2136
    }
    printf("%d",sum);
    return 0;
}