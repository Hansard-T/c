#include <stdio.h>

int main (void)
{
	int n;
	scanf("%d",&n);
	double v[n];
	int s[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	v[0]=1;
	for(int a=1;a<n;a++)
	{
		v[a]=v[a-1]+1;
	}
	for(int m=0;m<n;m++)
	{
		double sum=0;
		for(int j=0;j<s[m];j++)
		{
			if(j%2==0)
				sum += 1/v[j];
			else
				sum -= 1/v[j];
		}
			printf("%.2lf ",sum);
	}
	return 0;
}
