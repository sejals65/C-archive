#include<stdio.h>
int main()
{
	int i,r,cube,sum;
    for(i=2;i<999;i++)
    { 
        int t=i;
        sum=0;
        cube=1;
        while(t>0)
        {
            r=t%10;
            cube=r*r*r;
            sum+=cube;
            t/=10;
        }
        if(i==sum)
          printf("%d ",i);
    }
	return 0;
}
