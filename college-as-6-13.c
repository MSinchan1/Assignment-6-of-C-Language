#include<stdio.h>
//Write a program to find sum of even digits of a number. Input: 23617 output: 2+6=8. Input: 4856, output:18.
int main()
{
    int n,sum=0,a;
    printf("Enter an number");
    scanf("%d",&n); //23617
    while(n>0)
    {
        a=n%10; //7....
        n/=10; //2361.....
        if(a%2==0)
        {
            sum+=a; //0+....
        }
    }
    printf("Sum of the even digits %d",sum);
    return 0;
}