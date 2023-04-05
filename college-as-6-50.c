#include<stdio.h>
//Write a program, which reads a float number (between 0 and 1)  and prints the sum of its first five digits.
// e.g. input 0.231562 output 2+3+1+5+6  = 17.
int main()
{
    float n;
    int k,a,sum=0;
    printf("Enter float number and an integer: "); 
    scanf("%f%d",&n,&k);//0.231562   5
    for(int i=1;i<=k;i++)
    {
        n*=10; //2.31562...
        a=n; //2...23...231...235...2356
        a%=10;//2....3...1....5....6
        sum+=a; //0+2...2+3....2+3+1.....2+3+1+5.....2+3+1+5+6
    }
    printf("%d\n",sum);//17
    return 0;
}