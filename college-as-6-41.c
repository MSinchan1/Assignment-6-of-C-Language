#include<stdio.h>
//Write a program, which reads a number and finds the location of last even digit. If the number is 18263 
//then the output is 4 since the last even digit 6 occurs at 4th place.
int main()
{
    int n,f=0,count=0,counteven=0;
    printf("Enter number");
    scanf("%d",&n); //18263
    while(n>0)
    {
        if((n%10)%2==0 && f==0) //6
        {
            counteven=count; //1
            f=1;
        }
        n=n/10;//1826....182....18....1
        count++; //1...2....3.....4.....5
    }
    printf("Last even digit is in %d place ",count-counteven);//5-1
    return 0;
}