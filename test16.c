#include <stdio.h>
#include<string.h>
int main ()
{
	char v[1000];
	int j,m;
	int a,e,i,o,u;
	a=e=i=o=u=0;
	scanf("%d",&m);
	while(m--)
	{
	scanf("%s",v);
	for(j=0;j<1000&&v[j]!='\0';j++)
	{
	switch(v[j]){
	case 'a': a++;break;
	case 'e': e++;break;
	case 'i': i++;break;
	case 'o': o++;break;
	case 'u': u++;break;
}
}
}
	printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
	return 0;
}
