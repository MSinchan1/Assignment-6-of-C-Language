#include<stdio.h>
//Write program to output the product of first digit and number. For above input 2*23617=47234 and 7*714=4998.
int main()
{
    int n,a;
    printf("Enter number");
    scanf("%d",&n); //21367
    a=n; //21367
    while(n>10)
    {
        n/=10; //2136
    }
    printf("%d",a*n); //2*21367
    return 0;
}