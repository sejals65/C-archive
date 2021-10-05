#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  int vowels=0,consonants=0,space=0;
    char line[100];
    scanf("%[^\n]",line);
    for(int i=0;line[i]!='\0';i++)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' ||line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        vowels++;
        else if((line[i]>'a' && line[i]<'z') || (line[i]> 'A' && line[i]<'Z'))
        consonants++;
        else if(line[i]==' ')
        space++;
    }
    printf("vowels=%d\nconsonants=%d\nspaces=%d\n",vowels,consonants,space);
	return 0;
}
