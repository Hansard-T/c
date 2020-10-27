#include <stdio.h>
int main (void)
{
	int a,b,r;

	printf("输入两个整数：");
	scanf("%d",&a);
	scanf("%d",&b);

	while(a%b){
	    a=b;
	    b=r;
	    r=a%b;
	}

	printf("最大公约数为:%d\n",b);

	return 0;
}
