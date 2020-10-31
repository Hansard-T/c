#include<stdio.h>

int main (void)
{
	int i,j=0;
	scanf("%d",&i);
	
	while(i!=1)
	{
			if (i%2==0){
				i=i/2;
			}
			else{
				i=((3*i)+1)/2;
			}
				j++;
}
	printf("%d",j);
	return 0;
}
