#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char ch;
    scanf("%c",&ch);
    if(isdigit(ch)!=0)
      printf("%c is a digit\n",ch);
    if(isalpha(ch)!=0)
      printf("%c is a letter\n",ch);
    if(islower(ch)!=0)
      printf("%c is a lowercase letter\n",ch);
    if(isupper(ch)!=0)
      printf("%c is an uppercase letter\n",ch);
	return 0;
}
