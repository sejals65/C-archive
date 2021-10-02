#include <stdio.h>
int main()
{
	int i,j,k;
    char arr[]={'a','b','c'};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j) 
              continue;
            for(k=0;k<3;k++)
            {
                if(k==i) 
                  continue;
                if(k==j) 
                  continue;
                
                printf("%c%c%c\n",arr[i],arr[j],arr[k]);
                
            }
        }
    }
	return 0;
}
