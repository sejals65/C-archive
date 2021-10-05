#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char color[100];
    int r,b,w,g,p;
    scanf("%[^\n]",color);
    for(int i=0;color[i]!='\0';i++)
    {
        r=0,b=0,w=0,g=0,p=0;
        for(int j=0;color[j]!='\0';j++)
        {
            if(color[j]=='r')
            r++;
            else if(color[j]=='b')
            b++;
            else if(color[j]=='w')
            w++;
            else if(color[j]=='g')
            g++;
            else if(color[j]=='p')
            p++;
        }
    }
    printf("RED=%d\nBLUE=%d\nGREEN=%d\nWHITE=%d\nOther=%d",r,b,g,w,p);
	return 0;
}
