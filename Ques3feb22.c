22-FEB-2024
//Code to input a string with some word and reverse each word
#include<stdio.h>
#include<string.h>
int main()
{
int i=0,l,j;
char s[20],temp;
printf("Enter the elements in the string\n");
fgets(s,20,stdin);
l=strlen(s);
for(i=0,j=l-1;i<j;i++,j--)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
puts(s);
return 0;
}
