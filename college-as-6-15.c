#include<stdio.h>
//Write a program to find number of even digits of a number.  Input 423 output 2. Input 21151 output 1.
int main()
{
    int n,a,count=0;
    printf("Enter number");
    scanf("%d",&n);// 423
    while(n>0)
    {
        a=n%10; //3....
        n=n/10; //42...
        if(a%2==0)
        {
            count++; //0+1....
        }
    }
    printf("Number of even digits: %d",count); // 2
    return 0;
}