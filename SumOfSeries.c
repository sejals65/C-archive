#include<stdio.h>
int main()
{
	double sum=0.0;
    int i,p;
    for(i=0;i<=20;i++)
    {
        p= pow(10,i);
      sum+=p;
      
    }
    printf("1+10+100+...+20terms=%f",sum);
	return 0;
}
