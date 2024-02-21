//QUES 2. Code to Input a string containing alphabets and find frequency of each alphabet
#include<stdio.h>
#include<string.h>
void countf(char); //FUNCTION DECLRATION
int main()
{
char str[10];
printf("Enter the string alphabets\n");
fgets(str,10,stdin);
countf(str);   //FUNCTION CALL
return 0;
}
void countf(char str[])
{
int i;
int f[26]={0};//Taking an array to store the frequency of each alphabet (taking size of array to be 26 )
for(i=0;str[i]!='\0';i++){
if(str[i]>='a'&&str[i]<='z'){
f[str[i]-'a']++;  //Incrementing the frequency of the alphabet
}
}
for(i=0;i<26;i++){
if(f[i]>0){
printf("%c comes %d times\n",'a'+i,f[i]);
}
}
}
