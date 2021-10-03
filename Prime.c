#include<stdio.h>
int main()
{
	int n,i;
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
      if(n%2==0)
      {
        printf("Not a Prime number");
        break;
      }
      else
      {
        if(i==n/2)
        printf("Prime number");

      }
  }
	return 0;
}
