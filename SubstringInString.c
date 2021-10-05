#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str1[10],str2[10];
    scanf("%s %s",str1,str2);
    int i,l1,l2,max;
    l1=strlen(str1);
    l2=strlen(str2);
    max=l1-l2;
    for(i=0;i<=max;i++)
    {
        if(strncmp(str1+i,str2,l2)==0)
          break;
    }
   if(i<=max)
    printf("Substring found at index %d",i);
   else
    printf("Not found");
	return 0;
}
