#include<stdio.h>
int main()
{
	char a,b,c;
	scanf ("%c%c%c",&a,&b,&c);
	if(c=='0')
	{
		c='\a'; 
	    if(b=='0')
	    {
		  b='\a'; 
	    }	
	}	

	printf("%c%c%c",c,b,a);
	return 0;

}
