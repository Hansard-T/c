#include <stdio.h>
int main (void)
{
	int i;
	int j;

          for(j=1;j<=3;j++){
            for(i=1;i<=j-1;i++)
		printf(" ");
            for(i=j;i<=6-j;i++)
		printf("*");
	    putchar('\n');
	  }
	  for(j=4;j<=5;j++){
	    for(i=0;i<5-j;i++)
	      printf(" ");
	    for(i=5-j;i<j;i++)
	      printf("*");
            putchar('\n');
            }
return 0;
}
