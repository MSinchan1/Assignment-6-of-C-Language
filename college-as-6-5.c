#include<stdio.h>
//Write program to print the kth digit from last. input 23617 and k=4 output 3. k=2, 1
int main()
{
    int n,k,a;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k); //23617 4
    for(int i=1;i<=k;i++)
    {
        a=n%10; //7
        n/=10; //2361
    }
    printf("%d",a);
    return 0;
}