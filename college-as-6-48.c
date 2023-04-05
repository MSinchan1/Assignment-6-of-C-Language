#include<stdio.h>
//Write a program, which reads an integer (n) and n digits of a number (integer) in reverse order.
// The program outputs the number. e.g. n=5 and digits are 3 2 5 1 2 the output is  21523.
int main()
{
    int n,k,temp=0,i=1,b,j=1;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k); //32512   5
    b=n; //32512
    while(n>0)
    {
        if(i<=k) // 1...2...3
        {
        temp=temp*10+(b%10); //0*10+2...2*10+1....21*10+5....215*10+2...2152*10+3...21523
        b/=10; //3251...325...32....3...0
        i++; //2...3...4....5....6
        j=j*10;//10...100....1000....10000
        }
        n/=10;//3251....325...32....3
    }
    printf("%d",b*j+temp); //0*10000+21523=21523
    return 0;
}