22-FEB-2024
//Code to input a string and arrange each word alphabatically i.e good afternoon= afternoon good
#include<stdio.h>
int main()
{
int n,arr[n],c=0,t,j;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
if(arr[i]>0){
c=i;
break;
}
}
for(i=c+1;i<n;i++)
if(arr[i]<0)
{
t=arr[i];
for(j=i;j>c;j--)
{
arr[j]=arr[j-1];
}
arr[c}=t;
c++
}
}
printf("After rearrangement\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i])
}
return 0;
}
