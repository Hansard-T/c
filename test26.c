#include<stdio.h>
#include<string.h>

int main ()
{
	int t;
	char a[1000];
	scanf("%d",&t);
	while (t--)
	{
		int i,sum=0;
		scanf("%s",a);
 
		for (i=0;i<strlen(a);i++)
		{	
			if(a[i]>=48&&a[i]<=57) 
			sum+=1;
		}
			printf("%d\n",sum);
	}
	return 0;
}

