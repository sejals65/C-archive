  P 
  PR
  PRO
  PROG
  PROGR
  PROGRA
  PROGRAM
  PROGRA
  PROGR
  PROG
  PRO
  PR
  P
  
#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char str[10];
    scanf("%s",str);
    int i,j,k,n;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
          printf("%c",str[j]);
        
        printf("\n");
    }

    for(i=n-1;i>0;i--)
    {
        for(j=0;j<i;j++)
          printf("%c",str[j]);
        printf("\n");
    }
	return 0;
}
