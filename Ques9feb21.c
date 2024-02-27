//21feb2024
  //Code to convert entire string UPPER OR LOWER as specified by the user
#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
int i=0,c;
printf("Enter 1 if you want to convert it to lower case and press any number if you want to convert entire string to upper case\n")
  scanf("%d",&c);
if(c==1)
{
printf("Input the string\n");
fgets(s,20,stdin);
while(s[i]!='\0')
{
s[i]=s[i]+32;
s[i]='\0';
puts(s);
}
}
else
{
printf("Input the string\n");
fgets(s,20,stdin);
while(s[i]!='\0')
{
s[i]=s[i]-32;
s[i]='\0';
puts(s);
}
}
return 0;
}

