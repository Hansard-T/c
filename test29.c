#include <stdio.h>

int main ()
{
	int i;
	int T;
	scanf("%d",&T);
	int v[T][2];
	for(i=0;i<T;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	for(int a=0;a<T;a++)
	{
		if(v[a][0]%v[a][1]==0)
		{
			printf("Yes.\n");
		}
		else
		{
			printf("No.\n");
		}
	}
	return 0;
}
