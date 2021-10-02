#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    j=2;
    for(i=0;i<3;i++)
    {
        while(j>=0)
        {
            sum+=a[i][j];
            j--;
            break;
        }
    }
    printf("Sum of off diagonals is %d",sum);
    return 0;
}
