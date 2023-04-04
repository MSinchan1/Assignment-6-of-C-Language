#include<stdio.h>
//Write a program, which reads an integer and prints another integer. The output is reverse of the input.
//e.g. for input 27921 the output is 12972. Also print the double of the answer (i.e. 25944).
int main()
{
    int n,reverse=0;
    printf("Enter number");
    scanf("%d",&n); //27921
    while(n>0)
    {
        reverse=reverse*10+(n%10); //0*10+1....1*10+2......
        n/=10; //2792.....279.....27....2
    }
    printf("Reversed number is: %d\nDouble of the reversed number is: %d",reverse,reverse*2); //12972   25944
    return 0;
}