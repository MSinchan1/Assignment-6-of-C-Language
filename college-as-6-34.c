#include<stdio.h>
//Write a program, which deletes all digits except last k digits. e.g. input 23617 and k=3 output 617.
int main()
{
    int n,k,a,temp=0,j=1;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k); //23617   3
    for(int i=0;i<k;i++)
    {
        a=n%10; //7....1...6
        temp=temp+j*a; //0+1*7.......7+10*1....17+100*6
        n/=10; //2361....236....23
        j=j*10; // 1*10....10*10....100*10
    }
    printf("%d",temp); //617
    return 0;
}