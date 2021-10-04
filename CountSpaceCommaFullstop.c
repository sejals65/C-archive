#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	
	  int i=0,space=0,comma=0,period=0;
    char line[100];
    scanf("%[^\n]",line);
    while(line[i]!='\0')
    {
        if(line[i]==' ')
        space++;
        else if(line[i]==',')
        comma++;
        else if(line[i]=='.')
        period++;
        i++;
    }
    printf("Space=%d\nComma=%d\nPeriod=%d\n",space,comma,period);
	return 0;
}
