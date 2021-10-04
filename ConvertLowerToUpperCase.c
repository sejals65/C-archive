#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str[100];
    gets(str);   
    int n,i=0;
    while(str[i] != '\0')
    {
        str[i]=toupper(str[i]);
        i++;
    }
    printf("%s",str);
	return 0;
}
