#include <stdio.h>
int main()
{

  int i,j,a[100],flag;
  int n,temp;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  for(i=0;i<n-1;i++)
  {
      flag=0;
      for(j=0;j<n-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              flag=1;
          }
      }
      if(flag==0)
      break;
  }
  
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
