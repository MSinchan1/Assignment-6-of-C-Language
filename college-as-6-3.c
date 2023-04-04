#include<stdio.h>
// Write a program to delete odd digits.
int main()
{
    int n,i,m=0,o=1;
    printf("Enter number");
    scanf("%d",&n); //21367
    while (n>0)
    {
        i=n%10;
        if(i%2==0)
        {
            m+=o*i;
            o*=10;
        }
        n/=10;
    }
    printf("%d",m);
    return 0;
}
