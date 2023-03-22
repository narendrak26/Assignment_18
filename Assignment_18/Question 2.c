#include <stdio.h>
#include<string.h>
void reverse(char ch[])
{
int len,temp;
len=strlen(ch);
for(int i=0;i<len/2;i++)
{
	temp=ch[i];
	ch[i]=ch[len-i-1];
	ch[len-i]=temp;
 } 
}
int main()
{
char s[100];
printf("Enter the String\n");
gets(s);
strrev(s);
printf("Reverse is %s:",s);
return 0;

}
