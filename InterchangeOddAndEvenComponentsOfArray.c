#include <stdio.h>
int main()
{
	int i,n;
  printf("Enter no of elements of array:\n");
  scanf("%d",&n);
  int a[n];
  
  printf("Enter elements of array:\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int j=0;
  for(i=0;i<n-1;i+=2)
  {
     a[i]=a[i]+a[i+1];
     a[i+1]=a[i]-a[i+1];
     a[i]=a[i]-a[i+1];
  }

  for(i=0;i<n;i++)
    printf("%d ",a[i]);
	return 0;
}
