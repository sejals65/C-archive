#include<stdio.h>
int main()
{
    int i,j,k;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==n-1)
              printf("*");
            else
              printf(" ");
        }
        for(k=0;k<=i;k++)
          printf("*");
        printf("\n");
    }
    for(i=n;i>0;i--)
    {
        for(j=0;j<7;j++)
        {
            printf(" ");
        }
        for(k=i-1;k>0;k--)
          printf("*");
        printf("\n");
    }	
	return 0;
}
