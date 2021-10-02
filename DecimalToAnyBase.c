#include <stdio.h>
int main()
{
  int n;
  int base,b;
  int r,p=0,k=0;
  printf("Enter number:\n");
  scanf("%d",&n);
  printf("Enter the base:\n");
  scanf("%d",&base);
  if(base==2)
  {
      while(n>0)
      {
       r=n%2;
       p=(10*k)+r;
       n/=2;
       k++;
      }
      while(p>0)
      {
          r=p%10;
          b=(b*10)+r;
          p/=10;
      }
      printf("%d",b);
  }
  else if(base==8)
    printf("%o",n);
  else if(base==16)
    printf("%x",n);
  return 0;
}
