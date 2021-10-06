#include<stdio.h>
int min(int *, int);
int main()
{
    int a[20],len,i,result;
    len=sizeof(a)/sizeof(a[0]);
    for(i=0;i<len;i++)
    scanf("%d",&a[i]);
    result=min(a,len);
    printf("Minimum value in array is %d",result);
    return 0;
}
int min(int b[],int len)
{
    int i,mini;
    mini=b[0];
    for(i=1;i<len;i++)
    {
        if(b[i]<mini)
        mini=b[i];
    }
    return mini;
}
