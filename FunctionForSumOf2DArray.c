#include<stdio.h>
int sum(int [2][3]);
int main(){
    int result;
    int arr[2][3]={1,2,3,4,5,6};
    result=sum(arr);
    printf("Sum is %d",result);
    return 0;
}
int sum(int b[2][3])
{
    int s=0,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        s+=b[i][j];
    }
    return s;
}
