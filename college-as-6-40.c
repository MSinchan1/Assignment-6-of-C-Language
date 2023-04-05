#include<stdio.h>
//Write a program, which reads a number the finds special product. If number is 2314 then output is 
//4 + 1x4 + 3x1x4 + 2x3x1x4 = 44. If input number is 223 then output is 3 + 2x3 + 2x2x3 = 21.
int main()
{
    int n,product=0,a,b=1;
    printf("Enter number");
    scanf("%d",&n);//223
    while(n>0)
    {
        a=n%10;//3...2...2
        b*=a; //3*1...3*2...6*2
        product+=b; //0+3....3+6....9+12
        n/=10;//22...2
    }
    printf("%d",product);//21
    return 0;
}