//29FEB
//Code to reverse an array using pointer without using functions
#include<stdio.h>
int main()
{
  int n,i,*p1,*p2,arr[10],t;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",arr[i]);
}
*p1=arr;
*p2=arr+n-1;
while(p1<p2)
{
t=*p1;
*p1=*p2;
*p2=t;
p1++;
p2--;
}
printf("After reversing Array\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
