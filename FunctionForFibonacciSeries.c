#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int a)
{
    int f1=1,f2=1,sum;
    while(a)
    {
        printf("%d ",f1);
        sum=f1+f2;
        f1=f2;
        f2=sum;
        a--;
    }
}
