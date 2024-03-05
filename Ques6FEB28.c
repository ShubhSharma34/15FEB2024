//28FEB
//Code to input a string and to find it's length using pointers
#include<stdio.h>
int main()
{
  char s[10],*p;
int l=0;
  printf("Enter the elements in the string\n");
  scanf("%s",s);
p=s;
while(*p!='\0')
{
l++;
p++;
}
printf("%d is the length of the string\n",l);
return 0;
}
