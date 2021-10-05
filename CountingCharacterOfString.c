#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str[100];
    int c=0;
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i])!=0)
          c++;
    }
    printf("%d",c);
	return 0;
}
