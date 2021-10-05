#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char line[100];
    scanf("%[^\n]",line);
    int upp=0,low=0,spe=0;
    for(int i=0;line[i]!='\0';i++)
    {
        if(isupper(line[i])!=0)
        upp++;
        else if(islower(line[i])!=0)
        low++;
        else if(ispunct(line[i])!=0)
        spe++;
    }
    printf("Uppercase=%d\nlowercase=%d\nspecial symbols=%d",upp,low,spe);
	return 0;
}
