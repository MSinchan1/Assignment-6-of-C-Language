#include<stdio.h>
//Write program to print the second digit. input 23516 the output is 3. Input 714, 1.
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n); //23516
    while(n>100)
    {
        n=n/10; //2351....
    }
    printf("%d",n%10);//23%10=3
    return 0;
}