#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	
    int i,j,n;
    int temp;
    char str[100];
    scanf("%s",str);
    n=strlen(str);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=str[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
    for(i=0;i<n;i++)
      printf("%c",arr[i]);
	return 0;
}
