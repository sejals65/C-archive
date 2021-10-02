#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter no of elements of first and second array\n");
    scanf("%d %d",&m,&n);
    int k=0;
    int l;
    l=m+n;
    int a[m],b[m],c[100];
    
    printf("Enter elements of first array\n");
    for(i=0;i<m;i++)
      scanf("%d",&a[i]);
  
    printf("Enter elements of second array\n");
    for(j=0;j<n;j++)
      scanf("%d",&b[j]);
    c[] = {0};
  
    i=0;
    j=0;k=0;
    while(i<m && j<n)
    {
        if(a[i] < b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        c[k++]=a[i++];
       
    }
    while(j<n)
    {
        c[k++]=b[j++];
       
    }
    int l=m+n;
    printf("Mergerd array is: \n");
    for(k=0;k<l;k++)
      printf("%d ",c[k]);
	return 0;
}
