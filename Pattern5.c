1 2 3 4 5
1 2 3 4
1 2 3 
1 2 
1
  
#include<stdio.h>
int main()
{
	  int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=n;j>=i;j--)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
	return 0;
}
