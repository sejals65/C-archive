#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char line[100];
    int c=1;
    scanf("%[^\n]",line);
    for(int i=0;line[i]!='\0';i++)
    {
        if(line[i]== ' ')
          c++;
    }
    printf("Number of words are %d",c);
	return 0;
}
