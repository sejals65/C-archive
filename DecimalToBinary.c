#include <stdio.h>
int main()
{
	  int n,r;
    int num=0;
    int i=0;
    printf("Enter decimal number:\n");
    scanf("%d",&n);
    int p[10]={0};
    while(n>0)
    {
       r=n%2;
       p[i]=r;
       i++;
       n/=2;
    }
    
    for(int k=i-1;k>=0;k--)
      printf("%d",p[k]);
	return 0;
}
