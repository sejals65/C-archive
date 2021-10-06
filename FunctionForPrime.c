#include<stdio.h>
void prime(int);
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
        printf("%d is not prime",n);
        break;
        }
    }
    if(i== ((int)sqrt(n) +1))
    printf("%d is a prime number",n);
}
