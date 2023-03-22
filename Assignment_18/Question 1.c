#include <stdio.h>
#include<string.h>
int str_len(char str[])
{
	int count;
	for(count=0;str[count]!='\0';count++);
   return count;
}
int main()
{
	char str[100];
   printf("Enter the string\n");
   scanf("%s",&str);
   int len=str_len(str);
   printf("The length of string is %d",len);
   
  return 0;
}
