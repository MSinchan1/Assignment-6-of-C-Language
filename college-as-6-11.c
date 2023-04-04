#include<stdio.h>
//Write a program, which reads two number (assume that both have same number of digits). The program outputs 
//the sum of product of corresponding digits. Input 327 and 539 output 3x5+2x3+7x9=84. 
//Input 5624 & 6435 output 5x6+6x4+2x3+4x5=80.
int main()
{
    int a,b,sum=0,c,d;
    printf("Enter two numbers and both have same number of digits");
    scanf("%d%d",&a,&b); // 327  539
    while(a>0 &&b>0)
    {
        c=a%10; //7
        a/=10; //32
        d=b%10; //9
        b/=10; //53
        sum+=(c*d);
    }
    printf("%d",sum);
    return 0;
}