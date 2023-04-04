#include<stdio.h>
//Write a program to delete last k digits of a number.
int main()
{
    int n,k;
    printf("Enter two integer");
    scanf("%d%d",&n,&k); //23617 3
    for(int i=1;i<=k;i++)
    {
        n=n/10; //2136
    }
    printf("%d",n);
    return 0;
}