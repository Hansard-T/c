#include <stdio.h>
#include <math.h>

int main ()
{
    double i1,i2,j1,j2;
    double a,b;

    scanf("%lf %lf %lf %lf",&i1,&i2,&j1,&j2);
    a = i1*i2*cos(j1+j2);
    b = i1*i2*sin(j1+j2);

    if(b<0)
    printf("%.2lf-%.2lfi\n",a,fabs(b));
    else
    printf("%.2lf+%.2lfi\n",a,b);

    return 0;
}
