#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char line[100];
    scanf("%[^\n]",line);
    for(int i=0;line[i]!='\0';i++)
      printf("%c",tolower(line[i]));
	return 0;
}
