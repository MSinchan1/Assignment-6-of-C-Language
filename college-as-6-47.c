#include<stdio.h>
//Write a program, which reads an integer and prints another integer. In the output all even digits are 
//retained and odd digits are removed. e.g. input 23145 output 24.
int main()
{
    int n,temp=0,i=1;
    printf("Enter number");
    scanf("%d",&n); //23145
    while(n>0)
    {
        if((n%10)%2==0) //4....2
        {
            temp=temp+(n%10)*i; //0+4*1....4+2*10
            i*=10; //10...
        }
        n/=10; //2314....231....23....2
    }
    printf("%d",temp); //24
    return 0;
}