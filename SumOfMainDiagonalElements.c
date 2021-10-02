#include <stdio.h>
int main()
{
  int i,j,a[4][4];
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
    for(j=0;j<4;j++)
    {
       if(i==j)
          sum+=a[i][j];
    }
  }
  printf("Sum of main diagonal elements is %d",sum);
  return 0;
}
