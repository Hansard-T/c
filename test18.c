#include <stdio.h>
#include <math.h>

int main (void)
{
	int N;
	scanf("%d",&N);
	
	int i,j;
	int v[N][2];
	for(i=0;i<N;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	int a;
	double sum[N];
	for(a=0;a<N;a++)
	{
		sum[a]=sqrt(v[a][0]*v[a][0]+v[a][1]*v[a][1]);
	}
	double max;
	max=sum[0];
	for(int m=1;m<N;m++)
	{
		if(sum[m]>max)
			max=sum[m];
	}
	printf("%.2lf",max);
	return 0;
}	
