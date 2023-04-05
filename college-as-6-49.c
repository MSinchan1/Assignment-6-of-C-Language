#include<stdio.h>
//Write a program, which reads two integers a and b and outputs a/b correct to 5 places of decimal. 
//The program should not use any float variable or “%f”. (assume a<b) 
int main() 
{
    int a, b;
    printf("Enter two number first one is smaller");
    scanf("%d%d", &a, &b); //2    3
    printf("%d.", a/b);  // Print integer part of quotient   0
    for (int i = 0; i < 5; i++) 
    {
        a = a % b * 10;  // Compute next decimal digit   2*10...2*10...2*10...2*10...2*10
        printf("%d", a/b);  // Print next decimal digit 20/3=6...20/3=6....20/3=6...20/3=6...20/3=6
    }
    return 0;
}