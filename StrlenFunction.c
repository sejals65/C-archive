#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
  gets(str1);
  gets(str2);
  
  printf("%s is %d character long\n",str1,strlen(str1));
  printf("%s is %d character long\n",str2,strlen(str2));
	return 0;
}
