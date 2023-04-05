#include<stdio.h>
//Write a program to print the kth even digit from last. e.g. input 23687 and k=2 output 6.
int main()
{
    int n,k,a,i=0;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k); //23687   2
    while(n>0)
    {
        if((n%10)%2==0 && i<=k)
        {
            a=n%10; //8.....6
        }
        i++;// 1...2...3
        n/=10; // 2368...236...23...2
    }
    printf("%d",a); //6
    return 0;
}