#include<stdio.h>
//Write a program, which reads a number and adds 1 to every digit. If input is 2314 then output is 3425.
 //Assume that no digit is 9.
int main()
{
    int n,temp=0,i=1;
    printf("Enter number"); 
    scanf("%d",&n); //2314
    while(n>0)
    {
        temp=temp+((n%10)+1)*i; //0+(4+1)*1....5+(1+1)*10...25+(3+1)*100....425+(2+1)*1000
        i*=10;//10....100...1000
        n/=10; //231...23...2
    }
    printf("%d",temp); //3425
    return 0;
}