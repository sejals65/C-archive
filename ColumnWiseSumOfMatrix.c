#include <stdio.h>

int main()
{
  int a[4][4],i,j;
  int sum=0;
  for(i=0;i<4;i++)
  {
      for(j=0;j<4;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  for(i=0;i<4;i++)
  {
      sum=0;
      for(j=0;j<4;j++)
      {
          sum+=a[j][i];

      }
      printf("\nSum of %d column is %d",i+1,sum);
  }
  return 0;
}
