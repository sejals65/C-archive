#include <stdio.h>
int main()
{
	  int n,p,r,num=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        num=num*10+r;
        n/=10;
    }
    while(num>0)
    {
        p = num%10;
        switch(p)
        {
            case 1: printf("One ");  
            break;
            case 2: printf("Two ");  
            break;
            case 3: printf("Three ");    
            break;
            case 4: printf("four "); 
            break;
            case 5: printf("Five ");     
            break;
            case 6: printf("Six ");     
            break;
            case 7: printf("Seven ");     
            break;
            case 8: printf("Eight ");     
            break;
            case 9: printf("Nine ");     
            break;
        }
        num/=10;        
    }
	return 0;
}
