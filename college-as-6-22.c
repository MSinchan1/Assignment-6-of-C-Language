#include<stdio.h>
//Write a program, which finds the sum of numbers formed by consecutive digits of an integer number. 
//Input 2415 output 24+41+15=80.
int main()
{
    int n,a,sum=0;
    printf("Enter number");
    scanf("%d",&n); //2415
    while(n>10)
    {
       a=n%100; //15
       n/=10; //241 
       sum+=a;
    }
    printf("%d",sum);
    return 0;
}