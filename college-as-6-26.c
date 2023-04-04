#include<stdio.h>
//Write a program, which gives the sum of digits at even location of a integer number. 
//Input 2314 output 3+4=7. Input 72314 output: 7+3+4=14 Input 572314 output 7+3+4=14.
int main()
{
    int n,a,sum=0;
    printf("Enter number");
    scanf("%d",&n); //2314
    while(n>0)
    {
        a=(n%100)%10; // 4+3...
        n/=100; //23.....
        sum+=a; //0+4+....
    }
    printf("%d",sum); //7
    return 0;
}