#include<stdio.h>
//Write a program, which reads a number the finds special sum. If number is 2314 then output is 
//4 + 14 + 314 + 2314 = 2646. If input number is 223 then output is 3 + 23 + 223 = 249. If input is 12564 then 
//output is 4 + 64 + 564 + 2564 + 12564 = 15760.
int main()
{
    int n,k,temp=0,j=10;
    printf("Enter number");
    scanf("%d",&n); //2314
    k=n; //2314
    while(n>0)
    {
        temp=temp+k%j; //4+14+314+2314
        j=j*10;//100...1000
        n/=10; //231...23...2
    }
    printf("%d",temp); //2646
    return 0;
}