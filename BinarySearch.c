#include <stdio.h>
int main()
{
  int l,r,mid,a[100],i,n,key,present=0;
  scanf("%d%d",&n,&key);
  
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  l=0;
  r=n-1;
  
  while(l<r)
  {
      mid=(l+r)/2;
      if(key==a[mid])
      {
          printf("Element found at %d location",mid+1);
          break;
      }
      else if(key<a[mid])
        r=mid-1;
      else 
        l=mid+1;
  }
  
  if(l>r)
    printf("Element not found");
  return 0;
}
