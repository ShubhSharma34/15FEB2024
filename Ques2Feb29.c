//29FEB
//Code to swap 2 numbers without using temporary variables
#include<stdio.h>
int main()
{
  int n1,n2;
printf("Enter the first number\n");
scanf("%d"&n1);
printf("Enter the second number\n");
scanf("%d",&n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("After Swapping 2 %d and %d are first and and second number respectively\n",n1,n2);
return 0;
}
