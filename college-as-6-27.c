#include<stdio.h>
//Write a program, which reads an integer and prints another integer. In the output all even digits are
//retained and odd digits are decrement by 1. e.g. input 23145 output 22044.
int main()
{
    int n,a,temp=0,j=1;
    printf("Enter number: ");
    scanf("%d",&n); //23145
    while(n>0)
    {
        a=n%10;//5....4....1....3...2
        if(a%2!=0)//5....1....3
        {
            a-=1;//4....0....2
        }
        temp=temp+j*a;//0+4.....4+4*10...44....44+0*100.....44+2*1000....2044+2*10000
        j=j*10;//10...100...1000...10000
        n/=10;//2314....231...23...2
    }
    printf("New integer is: %d",temp);//22044
    return 0;
}