#include<stdio.h>
//Write a program, which reads a number x and a digit (integer) y and puts y as first digit in x.
// If x=2531 and y=8 then output is 82531.
int main()
{
    int x,y,a,i=1;
    printf("Enter a number and an integer");
    scanf("%d%d",&x,&y); //2531    8
    a=x;//2531
    while(x>0)
    {
        i=i*10; //1*10....10*10....100*10....1000*10
        x/=10; //253....25...2
    }
    printf("%d",i*y+a); //10000*8+2531=82531
    return 0;
}