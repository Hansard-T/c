#include <stdio.h>

int main ()
{
	int i,j,min,b=1;
	scanf("%d %d",&i,&j);

	if(i<j)
		min=j;

	while(1)
	{
		if(min%i==0&&min%j==0)
		{
			printf("%d",min);
			break;
		}	
			min++;
	}
	return 0;
}
