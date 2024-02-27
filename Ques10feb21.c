21Feb2024
  //Code to imply strcat()
#include<stdio.h>
  #include<string.h>
  int main()
{
  char ss[20],sd[10];  //AS while implying strcat the second string must be small as compared to first string
printf("Enter the eleemnts of the string in both the strings\n");
fgets(ss,20,stdin);
fgets(sd,10,stdin);
strcat(ss,sd);
puts(ss);
return 0;
}
