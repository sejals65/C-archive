#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  int n=0,i=0;
    char name[10];
    scanf("%s",name);
    while(name[i]!='\0')
    {        
        n++;
        i++;
    }
    printf("%d",n);
	return 0;
}
