#include<stdio.h>
int main()
{
	int i;
  int fact=1;
  int n;
  printf("Enter Number:\n");
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
      fact*=i;
  }
      printf("%d!=%d",n,fact);
	return 0;
}
