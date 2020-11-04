#include <stdio.h>
#include <string.h>

int main (void)
{
	int i,j,length;
	char a[10001];
	int zero,one,two,three,four,five,six,seven,eight,nine;
	scanf("%s", a);
	length=strlen(a);
	
	for(i=0;i<length;i++)
	{
		switch(a[i]){
		case '0': zero++; break;
		case '1': one++; break;
		case '2': two++; break;
		case '3': three++; break;
		case '4': four++; break;
		case '5': five++; break;
		case '6': six++; break;
		case '7': seven++; break;
		case '8': eight++; break;
		case '9': nine++; break;
		}
	}
	printf("0=%d\n1=%d\n2=%d\n3=%d\n4=%d\n",zero,one,two,three,four);
	printf("5=%d\n6=%d\n7=%d\n8=%d\n9=%d\n",five,six,seven,eight,nine);	
	return 0;
}
