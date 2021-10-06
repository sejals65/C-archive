#include<stdio.h>
void reverse(char *);
int main()
{
    char str[20];
    scanf("%s",str);
    reverse(str);
    return 0;
}
void reverse(char b[])
{
    int i,n;
    n=strlen(b);
    for(i=n-1;i>=0;i--)
    printf("%c",b[i]);
}
