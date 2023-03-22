#include <stdio.h>
int isAlphaNumeric(char ch)
{
  if ((ch >= '0' & ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  return 1;
  else
  return 0;
}
int main()
{
char ch = 0;

    printf("Enter character: ");
    scanf("%c", &ch);

    if (isAlphaNumeric(ch))
    printf("Given character is an alphanumeric character\n");
else
    printf("Given character is not an alphanumeric character\n");

return 0;
}
