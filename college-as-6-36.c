#include<stdio.h>
//Write a program to print the kth digit e.g. input 23617 and k=4 output 1.
int main()
{
    int n,k,j=10,i=0,a,l=1;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k); //23617
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
    printf("%d",((a-(a%j))/j)%10);//((23617-627)/1000)%10==1
    return 0;
}