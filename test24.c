#include <stdio.h>
#include <math.h>
#define E 0.01
int main(){
	double r1,r2,p1,p2,a,b;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	a=(r1*r2)*cos(p1+p2);
	b=(r1*r2)*sin(p1+p2);
	if(fabs(a)<E)	a=0;
	if(fabs(b)<E)	b=0;
	if(b<0)	printf("%.2lf-%.2lfi",a,fabs(b));
	else	printf("%.2lf+%.2lfi",a,b);
	return 0;
}

