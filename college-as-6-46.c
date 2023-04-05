#include<stdio.h>
//Write a program, which reads a float number and an integer k and prints number by adding 1 to the first k digits.
// If input is 0.241573 and k is 4 then output is 0.352673. Assume that given number is between 0 and 1.
int main()
{
    float temp=0,n,j=10;
    int k;
    printf("Enter a float number and an integer");
    scanf("%f%d",&n,&k); //0.241573   4
    for(int i=1;i<=k;i++)
    {
        temp=temp+(1/j);//0+0.1....0.1+0.01....0.11+0.001....0.111+0.0001
        j=j*10;//100....1000...10000
    }
    printf("%f",temp+n);//0.1111+0.241573
    return 0;
}