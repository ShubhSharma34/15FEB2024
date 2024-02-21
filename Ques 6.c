//Ques No. 6 Code to input a string a &b where length of b<length of a
#include<stdio.h>
int main()
{
char a[10];
char b[10];
int l1,l2;
printf("Enter the string a:\n");
scanf("%s",a);
printf("Enter the string b:\n");
scanf("%s",b);
l1=strlen(a);
l2=strlen(b);
printf("%d is the length of a string\n",l1);
printf("%d is the length of string b\n",l2);
return 0;
}
