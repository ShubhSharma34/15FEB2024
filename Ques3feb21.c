21FEB2024
//Code to compare wheater the 2 strings are equal or not
#include<stdio.h>
  #include<string.h>
int strcmp(char,char);
  int main()
{
  int res;
char ss[20],sd[20];
printf("Enter the elements of 2 strings\n");
fgets(ss,20,stdin);
fgets(sd,20,stdin);
res=strcmp(ss,sd);
printf("%d",res);
return 0;
}
int strcmp(char ss,char sd)
{
  if(res==0)
{
printf("The strings are equal\n");
}
else
{
  return 1;
}
}
