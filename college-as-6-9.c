#include<stdio.h>
// Write program to find sum of all digits. Input 23617 outputs 2+3+6+1+7=19.
int main()
{
    int n,a,sum=0;
    printf("Enter number");
    scanf("%d",&n);//23617
    a=n; //23617
    while(n>0)
    {
        a=n%10; //7....
        n/=10;  //2361...
        sum+=a; //0+7....
    }
    printf("%d",sum);
    return 0;
}