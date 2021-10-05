#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    for(int i=0;(str1[i]!='\0' && str2[i]!='\0');i++)
    {
        if(str1[i]==str2[i])
        {
          printf("%s & %s is equal\n",str1,str2);
          break; 
        }
        else if((str1[i]-str2[i])<0)
        {
            printf("%s is smaller than %s",str1,str2);
          break;
        }
        else
        {
            printf("%s is greater than %s",str1,str2);
            break;
        }
     }
	return 0;
}
