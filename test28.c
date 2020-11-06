#include <stdio.h>
#include <string.h>

int main ()
{
	int length1,length2,m,n;
	int num=0,num1=0;
	int sum=0;
	int sum1=0;
	int sum2=0;
	char v[10001];
	char z[10001];
	scanf("%s",v);
	scanf("%d",&m);
	scanf("%s",z);
	scanf("%d",&n);
	length1=strlen(v);
	length2=strlen(z);
	for(int i=0;i<length1;i++)
	{
		if(v[i]-'0'==m-'0')
		{
			num++;
		}
	}
	if(num<2)
	{
		sum1=m;
	}
	else
	{
		for(int a=0;a<num;a++)
		{
			sum1+=m;
			m=m*10;
		}
	}
	for(int j=0;j<length2;j++)
	{
		if(z[j]-'0'==n-'0')
		{
			num1++;
		}
	}
	if(num1<2)
	{
		sum2=n;
	}
	else
	{
		for(int b=0;b<num1;b++)
		{
			sum2+=n;
			n=n*10;
		}
	}
	sum=sum1+sum2;
	printf("%d",sum);
	
	return 0;
}
