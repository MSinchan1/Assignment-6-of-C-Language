#include<stdio.h>
//Write a program to delete the kth digit from last. e.g. input 23617 and k=4 output 2617.
int main()
{
    int n,k,temp=0,j=1,i=1,b;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k); //23617
    b=n; //23617
    while(n>0)
    {
        if(i<k)
        {
        temp=temp+(n%10)*j; //7....17....617
        j=j*10; //10....100....1000
        i++; //2...3...4
        b/=10; //2361.....236......23
        }
        n/=10; //2361....236...23....2
    }
    printf("%d",(b/10)*j+temp); //2*1000+617
    return 0;
}