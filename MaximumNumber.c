 //Maximum Number in an array

#include <stdio.h>
#include<math.h>

int main()
{
    int max,i,a[10];
    int n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    max=a[0];
    
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d",max);
}
