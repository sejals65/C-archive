#include <stdio.h>
int main()
{
  int f1=0,f2=1,n,c=0;
  int s=0;
  printf("How many fibonacci elements do you want?\n");
  scanf("%d",&n);
  printf("Fibonacci series are:/n");
  while(c<n)
  {
      printf("%d ",f1);
      c++;
      s=f1+f2;
      f1=f2;
      f2=s;
  }
  
  return 0;
}
