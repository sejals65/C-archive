#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	  char digit;
    char letter;
    scanf("%c %c",&digit,&letter);
    if(isdigit(digit))
        printf("%c is a digit\n",digit);
    else
        printf("%c is not a digit\n",digit);
    
    if(isalpha(letter))
        printf("%c is a letter\n",letter);
    else
        printf("%c is not a letter\n",letter);
    
    if(isalnum(digit))
        printf("%c is a digit or letter\n",digit);
    else 
        printf("%c is not a digit or letter\n",digit);
    
    if(islower(letter))
        printf("%c is a lowercase letter\n",letter);
    else
        printf("%c is not a lowercase letter\n",letter);
    
    if(isupper(letter))
        printf("%c is an uppercase letter\n",letter);
    else
        printf("%c is not an uppercase letter\n",letter);
	return 0;
}
