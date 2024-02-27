22Feb 2024
//Code to input a one dimmensional array and rotatae array "k" times
#include<stdio.h>
int main()
{
    int a[10],n,i,j,t,k;
    printf("Enter the number of elements you want to put in your array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of times you want to rotate the array\n");
    scanf("%d",&k);
    for(i=0;i<=k,i++)
    {
        for(i=0,j=n-1;i<n/2;i++,j--)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    printf("Array after rotating it %d times",k);
    for(i=0;i<n;i++);
    {
        printf("%d",a[i]);
    }
    return 0;
}
