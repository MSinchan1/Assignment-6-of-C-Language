#include<stdio.h>
//Write a program to find sum of numbers formed by exchanging consecutive digits. Input 2415 output: 42+14+51=107.
int main()
{
    int n,a,sum=0;
    printf("Enter number");
    scanf("%d",&n); //2415
    while(n>10)
    {
        a=n%100; //15....41....24
        a=(a%10)*10+(a/10); // (15%10)*10+(15/10)=51....14.....42
        n/=10; //241 ...24...2
        sum+=a; //51+14+42
    }
    printf("%d",sum); //107
    return 0;
}