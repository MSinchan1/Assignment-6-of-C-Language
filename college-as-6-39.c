#include<stdio.h>
//Write a program, which reads a number the finds special sum in the following way. If number is 2314 then
//output is 2314 + 231 + 23 + 2 = 2570. If input number is 223 then output is 223 + 22 + 2 = 247.
int main()
{
    int n,k,temp=0,j=1;
    printf("Enter number");
    scanf("%d",&n); //2314
    k=n; //2314
    while(n>0)
    {
        temp=temp+k/j; //2314+231+23+2
        j*=10;//10...100...1000
        n/=10; //231...23...2
    }
    printf("%d",temp); //2570
    return 0;
}