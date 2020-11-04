#include <stdio.h>
#include <string.h>

int main ()
{
	int i,j,m,length,length1;
	int sum=0,num;
	char a[10001];
	int v[1000];

	scanf("%s", a);
	length=strlen(a);

	for(i=0;i<length;i++)
	{
		num=a[i]-'0';
		sum+=num;
	}
	if(sum>0&&sum<10)
	{
		length1=1;
		switch(sum){
		case 0: printf("ling ");
		case 1: printf("yi ");
		case 2: printf("er ");
		case 3: printf("san ");
		case 4: printf("si ");
		case 5: printf("wu ");
		case 6: printf("liu ");
		case 7: printf("qi ");
		case 8: printf("ba ");
		case 9: printf("jiu ");
		}
	}
	else if(sum>=10&&sum<100)
	{
		length1=2;
		v[0]=sum/10;
		v[1]=sum%10;
	}
	else
	{
		length1=3;
		v[0]=sum/100;
		v[1]=(sum%100)/10;
		v[2]=sum%10;
	}
	for(j=0;j<length1;j++)
	{
		switch(v[j]){
		case 0: printf("ling ");break;
		case 1: printf("yi ");break;
		case 2: printf("er ");break;
		case 3: printf("san ");break;
		case 4: printf("si ");break;
		case 5: printf("wu ");break;
		case 6: printf("liu ");break;
		case 7: printf("qi ");break;
		case 8: printf("ba ");break;
		case 9: printf("jiu ");break;
		}
	}
	return 0;
}
