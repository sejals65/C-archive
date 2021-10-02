#include <stdio.h>
int main()
{
	int noa,nob,noc,a[100],b[100],c[200];
  int i,j;

  printf("Enter no of elements in first array:\n");
  scanf("%d",&noa);

  printf("Enter elements of first array:\n");
  for(i=0;i<noa;i++)
    scanf("%d",&a[i]);

  printf("Enter no of elements in second array:\n");
  scanf("%d",&nob);

  printf("Enter elements of second array:\n");
  for(i=0;i<nob;i++)
    scanf("%d",&b[i]);

  noc=noa+nob;
  for(i=0;i<noa;i++)
    c[i]=a[i];

  for(j=0;j<nob;j++)
    c[i+j]=b[j];

  for(i=0;i<noc-1;i++)
  {
      for(j=0;j<noc-i-1;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
  }
	return 0;
}
