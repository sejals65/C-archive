#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    printf("%d\n",strcmp(str1,str2));
    printf("%d\n",strncmp(str1,str2,5));
	  return 0;
}
