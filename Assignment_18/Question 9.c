#include <stdio.h>
#include <string.h>

swap(char *s1,char*s2)
{
char temp;
temp=*s1;
*s1=*s2;
*s2=temp;
}
int stringlength(char *s)
{
int i;
  for(i=0;s[i];i++);
return i;

}
int reverse(char *s)
{
int a[1000],i,n,k=0,j=0,l;

  n=stringlength(s);

for(i=0;i<n/2;i++)
{
   swap(&s[i],&s[n-1-i]);
 }

for(i=0;s[i];i++)
{
  if(s[i]==' ')
{
a[k++]=i;
 }

}

  a[k]=i;

for(i=0;i<=k;i++)
{
  n=a[i]-j;

for(l=0;l<n/2;l++)
{
  swap(&s[l+j],&s[a[i]-1-l]);
 }
 j=a[i]+1;

  }

}
int main()
{

char s[1000];
 printf("Enter the string : ");
 gets(s);
 reverse(s);
 printf("\n %s",s);
return 0;
}
