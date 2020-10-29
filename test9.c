#include <stdio.h>

int dayofyear(int year,int month,int day)
{
    int i;
    int s=0;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
    if(year%4==0&&year%100!=0)
	a[1]=29;
	
    if(month>1){
    for(i=0;i<=month-2;i++){
	s+=a[i];
}
}
    else
        s=0;
        
    s+=day;
	
    return s;
}


int main (void)
{
    int year,month,day;
    int sum;    

    
    while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
    {
    sum=dayofyear(year,month,day);
    printf("%d\n",sum);
    }
    
    return 0;
}
