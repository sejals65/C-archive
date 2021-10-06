#include<stdio.h>
int compare(char *, char *);
int main()
{
    char str1[20],str2[20];
    scanf("%s %s",str1,str2);
    if(compare(str1,str2))
    printf("Strings are equal");
    else
    printf("Strings are not equal");
    return 0;
}
int compare(char b[],char c[])
{
    if(strcmp(b,c)==0)
    return 1;
    else 
    return 0;
}
