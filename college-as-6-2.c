#include<stdio.h>
//Write program to print all digits of a number.
int main()
{
    int n,k;
    printf("Enter an number");
    scanf("%d",&n); //21367
    do
    {
        k=n%10; //7
        n/=10; //2136
        printf("%d\n",k);

    } while (n>0);
    return 0;  
}