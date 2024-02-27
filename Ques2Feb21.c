//Code to reverse the string without using libraray functions
#include<stdio.h>
#include<string.h>
int main()
{
  int i=0;,j,l;
char s[20],t;
printf("Enter the eleemnts in the string\n");
fgets(s,20,stdin);
l=strlen(s);
for(i=0,j=l-1;i<j,i++,j--)
  {
  t=s[i];
  s[i]=s[j];
s[j]=t;
}
puts(s);
return 0;
}
