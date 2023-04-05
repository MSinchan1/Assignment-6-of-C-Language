#include<stdio.h>
//Write a program which reads a float x (between 0 and 1) and outputs a float y. Every digit of y is 
//one more than the corresponding digit in x. e.g. input 0.23156 output 0.34267. 
//We assume that all digits of x are less then 9.
int main()
{
    float n;
    int c=0,temp=0;
    printf("Enter a float number");
    scanf("%f",&n); //0.23156
    n=n*10;//2.3156
    while((int)n!=0)
    {
      c=c*10+(int)n;//0+2.....2*10+3.....23*10+1....231*10+5....2315*10+6
      n=n-(int)n; //0.3156....0.156....0.56.....0.6....0.0
      n=n*10; //3.156.....1.56....5.6.....6.0....0.0
      temp=temp*10+1;//0*10+1.....1*10+1.....11*10+1....111*10+1....1111*10+1
    }
    printf("0.%d",temp+c);//0.(11111+23156)
    return 0;
}