#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str[100];
    scanf("%[^\n]s",str);
    int i;
    int n=strlen(str);
    for(i=n-1;i>=0;i--)
    printf("%c",str[i]);
	return 0;
}
