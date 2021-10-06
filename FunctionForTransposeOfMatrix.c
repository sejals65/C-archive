#include<stdio.h>
void transpose(int [3][3]);
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    transpose(arr);
    return 0;
}
void transpose(int b[3][3])
{
    int i,j,c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        c[i][j]=b[j][i];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
}
