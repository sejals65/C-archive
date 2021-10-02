#include <stdio.h>
int main()
{
	  int i,j,n,c=0;
    int a[10][10],b[10][10];
    printf("Enter no of rows of matirx:\n");
    scanf("%d",&n);
  
    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        b[i][j]=a[j][i];
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(a[i][j]==b[i][j])
        c=1;
    }
        if(c)
        printf("Matrix is symmetric");
       else 
        printf("Matrix is not symmetric");
	return 0;
}
