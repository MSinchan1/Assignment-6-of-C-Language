#include<stdio.h>
// Write a program, which reads a number and prints a number after deleting the first digit. 
//If input is 2314 then output is 314. If input is 56 then output is 6.
int main()
{
    int n,temp=0,i=1;
    printf("Enter number");
    scanf("%d",&n);//2314
    while(n>10)
    {
        temp=temp+(n%10)*i; //0+4*1...4+1*10...14+3*100
        i*=10; //10..100
        n/=10; //231....23
    }
    printf("%d",temp); //314
    return 0;
}