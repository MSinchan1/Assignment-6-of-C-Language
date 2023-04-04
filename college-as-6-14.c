#include<stdio.h>
//Write a program to find number of digits of a number. Input 423 output 3. Input 21151 output 5
int main()
{
    int n,count=0;
    printf("Enter number");
    scanf("%d",&n); //423
    while(n>0)
    {
        n/=10; // 42
        count+=1; // 0+1+....
    }
    printf("Number of digits: %d",count); // 3
    return 0;
}