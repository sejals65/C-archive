#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  int i,n,j,flag=0;
    char str[100];
    scanf("%s",str);
    n=strlen(str);
    for(i=0,j=n-1;i<=n/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("%s is a palindrome",str);
    else
    printf("%s is not a palindrome",str);
	return 0;
}
