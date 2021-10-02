#include<stdio.h>

int main()
{
  int a[4][4],i,j;
int sum;

  for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    scanf("%d",&a[i][j]);
}
  
for(i=0;i<4;i++)
{
    sum=0;    
    for(j=0;j<4;j++)
        sum+=a[i][j];
  
    printf("sum of %d row is %d\n",i+1,sum);
  return 0;
}
