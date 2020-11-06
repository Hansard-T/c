#include <stdio.h>

int main ()
{
	int N;
	scanf("%d",&N);

	int v[N];
	int sum=0;
	for(int i=0;i<N;i++)
	{
		scanf("%d",&v[i]);
	}
	for(int a=0;a<N;a++)
	{
		for(int b=0;b<N;b++)
		{
			sum+=v[a]*10+v[b];
		}
	}
	for(int j=0;j<N;j++)
	{
		sum-=v[j]*10+v[j];
	}
	printf("%d",sum);
	
	return 0;
}
