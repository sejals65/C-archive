#include <stdio.h>
int main()
{
	  int i,j,n;
    int sum=0;
    printf("Enter no of rows:\n");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
              sum+=a[i][j];
        }
    }
    printf("Trace of matrix is %d",sum);
	return 0;
}
