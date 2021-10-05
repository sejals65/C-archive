#include <stdio.h>
double fact(int);
int main(){
    int n,r;
    double result;
    scanf("%d %d",&n,&r);
    result=fact(n)/(fact(r) * fact(n-r));
    printf("Binomial Coefficient NCR=%.0f",result);
    return 0;
}
double fact(int a){
    double facto=1.0;
    for(int i=1;i<=a;i++)
    {
        facto*=i;
    }
    return facto;
}
