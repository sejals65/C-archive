#include<stdio.h>
float avg(int *, int);
int main()
{
    int i,n,arr[20];
    float result;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    result=avg(arr,n);
    printf("Average is %.2f",result);
    return 0;
}
float avg(int b[],int l)
{
    int i,sum=0;
    float average;
    for(i=0;i<l;i++)
    sum+=b[i];
    average=sum/l;
    return average;
}
