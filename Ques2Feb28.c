//28FEB
//Code to reverse the string using Recursion
#include<stdio.h>
void reverse(char*s);
int main()
{
  char s[10];
printf("Enter the elements of the string\n");
scanf("%s",&s);
printf("String is Reversed\n");
reverse(s);
return 0;
}
void reverse(char*s)
{
  if(*s)
{
reverse(s+1);
printf("%c",*s);
  }
}
