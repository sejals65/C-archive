#include <stdio.h>
int main()
{
  int a[3][3],i,j,k,temp;
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
  }
  printf("Matrix before sorting:\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }
  for(i=0;i<3;i++)
  {
      for(j=0;j<2;j++)
      {
          for(k=j+1;k<3;k++)
          {
              if(a[i][j]>a[i][k])
              {
                  temp=a[i][j];
                  a[i][j]=a[i][k];
                  a[i][k]=temp;
              }
          }
      }
  }
  printf("Matrix after sorting:\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }
  return 0;
}
