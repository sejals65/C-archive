#include <stdio.h>

void leap(int);
int main(){
    int year;
    scanf("%d",&year);
    leap(year);
    return 0;
}
void leap(int y)
{
    if(y%400==0 || (y%4==0 && y%100!=0))
      printf("%d is a leap year",y);
    else 
      printf("%d is not a leap year",y);
}
