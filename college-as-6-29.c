#include<stdio.h>
//Write a program to prints the biggest digit and its location (from beginning). 
//e.g. in 7396348 biggest digit is 9 and its location is 3rd  from beginning.
int main()
{
    int n,a,big=0,pos=0,posmax=0;
    printf("Enter number: ");
    scanf("%d",&n); // 7396348
    while(n>0)
    {
        a=n%10; //8....4....3....6....9....3....7
        n/=10; //739634....73963....7396....739.....73.....7
        if(a>big)
        {
            big=a; //8.....9
            posmax=pos; // 0......3
        }
        pos++; //1....2...3.....4.....5......6
    }
    printf("Biggest digit is: %d\nLocation is %d from begining",big,(pos-posmax)); //9  (6-3)=3
    return 0;
}