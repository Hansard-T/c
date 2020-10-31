#include <stdio.h>

int main(void)
{
	int n,t,j;
	int min,pos;
	int v[100];
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&v[i]);
}
		min=v[0];
		for(j=1;j<n;j++)
		{
			if(v[j]<min){
				min=v[j];
				pos=j;
}	
}
		v[pos]=v[0];
		v[0]=min;
		for(int m=0;m<n;m++)
		{
			printf("%d ",v[m]);
}
			putchar('\n');
}
		return 0;
}
		
