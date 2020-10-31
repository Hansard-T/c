#include <stdio.h>

int main (void)
{
	int m;
	int i,j;

	scanf("%d",&m);
	int v[m][3];
	for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&v[i][j]);
}
}
	for(int a=0;a<m;a++)
	{
		if((v[a][0]+v[a][1])>v[a][2])
			printf("Case #%d: true\n",a+1);
		else
			printf("Case #%d: false\n",a+1);
}
	return 0;
}
