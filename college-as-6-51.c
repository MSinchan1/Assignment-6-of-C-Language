#include<stdio.h>
//Write a program, which reads an integer (n) and n digits of a float number (between 0 and 1) in correct order. 
//The program outputs the number. e.g. n=5 and digits are 3 2 5 1 2 the output is  0.32512.
int main()
{
   int n,a,f=0;
   printf("Enter integer: ");
   scanf("%d",&n); //5 
   for(int i=1;i<=n;i++)
   {
      printf("Enter digit: ");//3....2....5.....1....2
      scanf("%d",&a);
      f=f*10+a;//3....3*10+2......32*10+5....325*10+1.....3215*10+2
   } 
   printf("float number is: 0.%d",f);//0.32512
   return 0;
}