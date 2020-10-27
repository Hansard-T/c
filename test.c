#include <stdio.h>
int main (void)
{
	int a;
	int b;
	int c;

	  printf("请输入三个整数");
	  scanf("%d",&a);
          scanf("%d",&b);
	  scanf("%d",&c);

	  if(a+b<=c||a+c<=b||b+c<=a)
	          printf("0");
	  else if(a!=b&&b!=c&&c!=a)
		  printf("3");
	  else if(a==b&&b==c&&c==a)
		  printf("1");
	  else
		  printf("2");

  return 0;
}

