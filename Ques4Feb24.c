  //28FEB
//Code to swap 2 numbers using pointers
#include<stdio.h>
int main()
{
  int n1,n2,*p1,*p2,t;
printf("Enter the first number\n");
scanf("%d",&n1);
printf("Enter the second number\n");
scanf("%d",&n2);
p1=&n1;
p2=&n2;
t=*p1;
*p1=*p2;
*p2=t;
printf("Therefore after swapping the numbers are %d and %d as first and second numbers respectively\n",n1,n2);
return 0;
}
