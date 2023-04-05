#include<stdio.h>
//Write a program, which reads a number and finds the location of first even digit. If the number is 18263 
//then the output is 2 since the first even digit occurs at 2nd place.
int main()
{
    int n,place=0,placeeven=0;
    printf("Enter number");//18263
    scanf("%d",&n);
    while(n>0)
    {
        if((n%10)%2==0) //6.....2....8
        {
            placeeven=place; // 1....2.....3
        }
        n/=10;//1826...182...18...1
        place++;//1....2....3....4.....5
    }
    printf("Location of the first even digit is from left: %d",place-placeeven); //5-3
    return 0;
}