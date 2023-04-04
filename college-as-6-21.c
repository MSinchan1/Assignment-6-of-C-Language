#include<stdio.h>
//Read a number. Do half of number after last odd digit of that number. 
//Then result is multiplied by 3 as output.  Input 61389426 output 184167639 (61389213*3). Input 87 output 261.
// Input 78 output 222 (74*3).
int main()
{
    int n,extract=0,a,i=1;
    printf("Enter number");
    scanf("%d",&n); //61389426
    while(n%2==0)
    {
        a=(n%10)/2; //3.....1.....2
        extract=extract+a*i; //0+3*1....3+1*10.....13+2*100
        n/=10;//6138942.....613894....61389
        i=i*10; //10....100....1000 
    }
    printf("%d",(n*i+extract)*3); //(61389*1000+213)*3
    return 0;
}