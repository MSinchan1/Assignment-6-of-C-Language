#include<stdio.h>
//Write a program to prints the biggest digit and its location (from last). e.g. in 7396348 biggest digit
//is 9 and its location is 5th  from last.
int main()
{
    int n,a,max=0,pos=1,posmax;
    printf("Enter number");
    scanf("%d",&n); //7396348
    while(n>0)
    {
        a=n%10; // 8....4....3...6....9....3
        if(a>max)
        {
            max=a; //8....9
            posmax=pos; // 1....2.....3.....4......5
        }
        n/=10;//739634....739634....73963....7396....739....73....7
        pos++; //1.....2.....3.....4.....5....6......7
    }
    printf("Biggest number is %d\nPosition is %d from last",max,posmax);
}