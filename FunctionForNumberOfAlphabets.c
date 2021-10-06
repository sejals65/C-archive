#include<stdio.h>
int count(char *);
int main(){
    char str[100];
    int result;
    scanf("%s",str);
    result=count(str);
    printf("Number of alphabets are %d",result);
    return 0;
}    
int count(char b[])
{
    int i,c=0;
    for(i=0;b[i]!='\0';i++)
    {
        if(isalpha(b[i])!=0)
        c++;
    }
    return c;
}
