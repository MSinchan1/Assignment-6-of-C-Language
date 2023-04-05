#include<stdio.h>
//Write a program to delete first kth digits e.g. input 23617 and k=2 output 617.
int main()
{
    int n,k,a,i=0,j=10,l=1;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k); //23617   2
    a=n;//23617
    while(n>0)
    {
        i++; //1....2....3.....4.....5
        n/=10;//2361.....236....23....2
        if(l<(i-k))
        {
            j=j*10;//100....1000
            l++;//2....3
        }
    }
    printf("%d",a%j);//23617%1000==617
    return 0;
}