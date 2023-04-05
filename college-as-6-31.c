#include<stdio.h>
//Write a program to print the digit immediately before the first even digit. e.g. input 71236 output 1.
int main()
{
    int n,a;
    printf("Enter number: ");
    scanf("%d",&n); //71236
    while(n>0)
    {
        if((n%10)%2==0) //6
        {
            a=(n/10)%10; //3....1
        }
        n/=10; //7123....712....71...7
    }
    printf("%d",a); //1
    return 0;
}