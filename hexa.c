// #include<stdio.h>
// void k(int i,int j)
// {
//  static char x[]="0123456789ABCDEF";
//  if(i>=j){
//  k(i/j,j);
//  }
 
//  putchar(x[i%j]);
 
// }
// void main()
// {
//  k(20,12);
// }
// #include<stdio.h>
// void foo(int n)
// {
//  int m=1;
//  if(n)
//  {
//  m++;
//  foo(n+1);
//  }
//  m++;
 
//  printf("m=%d, n=%d\n", m, n);
// }
// int main()
// {
//  foo(-3);
//  return 0;
// }

// #include<stdio.h>
// int numPrint(int);
// int main()
// {
//  int n = 1;
// printf("\n\n Recursion : print first 50 natural numbers :\n");
// printf("-------------------------------------------------\n");
// printf(" The natural numbers are :");
//  numPrint(n);
//  printf("\n\n");
//  return 0;
// }
// int numPrint(int n)
// {
//  if(n<=50)
//  {

//  printf(" %d ",n);
//  numPrint(n+1);
//  }
// }

// #include<stdio.h>
// int sumOfRange(int);
// int main()
// {
//  int n1;
//  int sum;
// printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
// printf("-----------------------------------------------------------\n"); 
//  printf(" Input the last number of the range starting from 1 : ");
//  scanf("%d", &n1);
//  sum = sumOfRange(n1);
//  printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
//  return (0);
// }
// int sumOfRange(int n1)
// {
//  int res;
//  if (n1 == 1)
//  {
//  return (1);
//  } else
//  {
//  res = n1 + sumOfRange(n1 - 1); //calling the function sumOfRange itself
//  }
//  return(res);
// }

#include <stdio.h>
//function to count digits
int countDigits(int num)
{
 static int count=0;
 
 if(num>0)
 {
 count++;
 countDigits(num/10);
 }
 else
 {
 return count;
 }
}
int main()
{
 int number;
 int count=0;
 
 printf("Enter a positive integer number: ");
 scanf("%d",&number);
 
 count=countDigits(number);
 
 printf("Total digits in number %d is: %d\n",number,count);
 
 return 0;
}
