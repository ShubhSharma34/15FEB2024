//Code to implement strcat()
#include<stdio.h>
#include<string.h>
int main()
{
  int l1,l2,i=0;
char a[20],b[10];
printf("Input 2 strings\n");
fgets(a,20,stdin);
fgets(b,10,stdin);
l1=strlen(a);
l2=strlen(b);
i=0;
while(a[i]!='/0')
{
a[l1]=b[i];
l1++;
i++;
}
puts(a);
return 0;
}
