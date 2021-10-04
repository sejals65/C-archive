#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str1[100];
    char str2[100];
    
    gets(str1);
    gets(str2);
    
    strcat(str1,str2);
    puts(str1);
    
    strncat(str1,str2,3);
    puts(str1);
	return 0;
}
