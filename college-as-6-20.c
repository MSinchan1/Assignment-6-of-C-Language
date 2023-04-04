#include<stdio.h>
//Write a program to print the second last even digit. 
//e.g. input 23863 output 8 (do not use ‘if’). Input 325145761 output 4. [Hint: use two loops]
int main()
{
    int n,a,count=0;
    printf("Enter number");
    scanf("%d",&n); //325145761
    while(n%2!=0)
    {
        n/=10; //32514576......
        a=n/10; //3251457....
        //count++;
    }
    while(a%2!=0) //3251457....
    {
        a/=10; //325145........32514
    } 
    printf("%d",a%10); //32514%10=4
    return 0;
}