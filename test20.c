#include<stdio.h>
int main(void)
{
	int c1, c2;
	scanf("%d%d",&c1,&c2);
	int sub=c2-c1;
	if(sub%100>=50)
	{
		sub=sub/100+1;
	}
	else
	{
		sub=sub/100;
	}
	printf("%.2d:%.2d:%.2d\n",sub/3600,sub%3600/60,sub%60); 
	return 0;
}

