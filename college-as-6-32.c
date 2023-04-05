#include<stdio.h>
//Write a program to print the digit immediately after the first even digit. In above case 3.
int main()
{
    int n,a,b;
    printf("Enter number: ");
    scanf("%d",&n); //71236
    b=n*10; //712360
    while(n>0)
    {
        if((n%10)%2==0) // 6....2
        {
            a=b%10; // 0....3
        }
        b/=10; //71236...7123...712....71....7
        n/=10; //7123....712....71...7
    }
    printf("%d",a); //3
    return 0;
}