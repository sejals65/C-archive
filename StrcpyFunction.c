#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str1[100],str2[100],str3[100];
    
    gets(str1);
    gets(str2);
    
    printf("%s\n",strcpy(str1,str2));
    printf("%s\n",strncpy(str3,str2,7));
	return 0;
}
