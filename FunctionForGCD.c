#include<stdio.h>
int gcd(int,int);
int main()
{
    int n1,n2;
    int result;
    scanf("%d %d",&n1,&n2);
    result=gcd(n1,n2);
    printf("GCD of %d & %d is %d",n1,n2,result);
    return 0;
}
int gcd(int divi,int d)
{
    int r;
    do{
        r=divi%d;
        divi=d;
        d=r;
    }
    while(r!=0);
    return divi;
}
