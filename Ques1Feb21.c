21FEB2024
//Code to input a string and find it's length WITHOUT using libraray functions
#include<stdio.h>
  #include<string.h>
  int main()
{
  int i=0,l=0;
char s[20];
printf("Enter the string elements\n");
fgets(s,20,stdin);
while(s[i]!='\0')
{
l++;
i++;
}
printf("%d is the length of the given string\n",l);
return 0;
}
