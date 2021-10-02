#include <stdio.h>
int main()
{
	  int i,j,k;
    int m,n,p,q;
    int a[10][10],b[10][10];
    int c[10][10];
    printf("Enter no of rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
  
    printf("Enter no of rows and columns of second matrix:\n");
    scanf("%d %d",&p,&q);
  
    if(n==p)
    {   
        printf("Matrices can be multiplied\nResultant matrix is of order %d by %d",m,q);

        for(i=0;i<m;i++)
        {
          for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);        
        }

        for(i=0;i<p;i++)
        {
          for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);

        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {   
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
              printf("%d ",c[i][j]);
            printf("\n");
        }
      }
    else
      printf("Matrices can't be multiplied");
	return 0;
}
