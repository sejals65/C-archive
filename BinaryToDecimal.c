#include <stdio.h>
int main()
{
	  int n;
    int s=0;
    int r,i=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    while(n>0)
    {
      r=n%10;
      s+=r*pow(2,i);
      i++;
      n/=10;
    }
    printf("%d",s);
	return 0;
}
