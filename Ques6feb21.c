//Code to count number of words in a string
#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
int f=0,i;
printf("Enter the elements in the string\n");
fgets(s,10,stdin);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=' '&&s[i+1]!=' ')
  f++;
}
printf("Number of words in the string are %d\n",f);
return 0;
}
