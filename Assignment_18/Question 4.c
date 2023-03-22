#include <string.h>
void stringuppercase(char *s)
{
int i;

  for(i=0;s[i];i++)
 {
  if(s[i]>=97 && s[i]<=122)
 s[i]-=32;
  }
}
 int main()
 {

char s[1000];
int i;

  printf("Enter the string in lower case: ");
  gets(s);
 stringuppercase(s);
 printf("string in uppercase ='%s'\n",s);
}
