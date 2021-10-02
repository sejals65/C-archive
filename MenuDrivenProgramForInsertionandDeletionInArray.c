#include <stdio.h>

int main()
{
  int i,j,n,a[50],type;
  int pos,value;
  printf("Menu:\n");
  printf("1.Insert:\n2.Delete:\n");
  scanf("%d",&type);
  switch(type)
  {
      case 1: printf("Enter how many numbers do u want to feed:\n");
              scanf("%d",&n);
              printf("Enter %d numbers:\n",n);
              for(i=0;i<n;i++)
              scanf("%d",&a[i]);
              printf("Enter position and value to be inserted:\n");
              scanf("%d %d",&pos,&value);
              for(i=n-1;i>=pos-1;i--)
              {
                 a[i+1]=a[i];
                  if(i==pos-1)
                    a[i]=value;
              }
              printf("Elements in an array after insertion:\n");
              for(i=0;i<=n;i++)
              printf("a[%d]=%d\n",i,a[i]);

      case 2: printf("Enter how many elements do u want to feed:\n");
              scanf("%d",&n);
              for(i=0;i<n;i++)
              scanf("%d",&a[i]);
              printf("Enter position to delete:\n");
              scanf("%d",&pos);
              for(i=pos;i<n;i++)
              {
                  a[i-1]=a[i];
              }
              printf("Elements after deletion :\n");
              for(i=0;i<n-1;i++)
              printf("a[%d]=%d\n",i,a[i]);

  }
  return 0;
}
