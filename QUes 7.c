//Ques 7 Code to input a string and convert alphabets to piglatin format
#include<stdio.h>
#include<string.h>
int main()
{
char ss[120],st[20];
fgets(ss,120,stdin);
int l=strlen(ss);
if(ss[l-1]=='\n'){
ss[l-1]=' ';
}
ss[l]='\0';
int i=0;
while(ss[i]!='\0'){
int p=0;
while(ss[i]!=' '){
st[p]=ss[i];
p++,i++;
}
st[p]='\0';
int j=0;
if(st[0]=='a'||st[0]=='e'||st[0]=='i'||st[0]=='o'||st[0]=='u'||st[0]=='A'||st[0]=='E'||st[0]=='I'||st[0]=='O'||st[0]=='U'){
strcat(st,"yssy");
}
else{
char s=st[0];
int h=strlen(st);
for(int k=0;k<h-1;k++){
st[k]=st[k+1];
}
st[h-1]=s;
st[h]='a';
st[h+1]='y';
st[h+2]='\0';
puts(st);
}
i++;
}
return 0;
}
