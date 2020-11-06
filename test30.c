#include <stdio.h>

int main ()
{
	int i,j;
	int n;
	scanf("%d",&n);
	int v[3];
	
	v[0]=n/100;
	v[1]=(n%100)/10;
	v[2]=n%10;

	for(i=0;i<v[0];i++)
	{
		printf("B");
	}
	for(j=0;j<v[1];j++)
	{
		printf("S");
	}
	for(int a=1;a<=v[2];a++)
	{
		printf("%d",a);
	}
	return 0;
}
