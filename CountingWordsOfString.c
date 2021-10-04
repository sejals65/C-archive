#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  int i=0,word=0;
    char line[100];
    scanf("%[^\n]",line);
    while(line[i]!='\0')
    {
        if(line[i]== ' ' || line[i]==',' || line[i]=='.')
            word++;
            i++;
    }
    printf("%d",word);
	return 0;
}
