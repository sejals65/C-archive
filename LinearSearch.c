#include<stdio.h>
int main()
{
  int flag=0;
  int n,i,key,a[100];
  scanf("%d %d",&n,&key);
  
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  for(i=0;i<n;i++)
  {
      if(key==a[i])
      {
        printf("key is found at %d location",i+1);
        flag=1;
      }
  }
  if(flag==0)
    printf("Key not found");
  return 0;
}
