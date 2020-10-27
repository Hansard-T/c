#include <stdio.h>

int max_of(int v[],int i)
{
	int j;
        int max=v[0];
	for(j=1;j<i;j++){
             if(v[j]>max)
	         max=v[j];     
}
             return max;
}

int min_of(int v[],int i)
{
        int j;
        int min=v[0];
        for(j=1;j<i;j++){
            if(v[j]<min){
                min=v[j];
}
            return min;
}
}

int main (void)
{
	int n,a,m,l;
	int s=0;
	double average;
	int max1;
	int min1;
	
	scanf("%d",&n);

	int v[n];
	for(a=0;a<n;a++){
            scanf("%d",&v[a]);
}
	max1=max_of(v,n);

	for(m=0;m<n;m++){
	    if(v[m]==max1)
	        v[m]=0;
}
        min1=min_of(v,n);
        
        for(l=0;l<n;l++){
            if(v[l]==min1)
                v[l]=0;
}       
            
        for(a=0;a<n;a++){
	    s+=v[a];
}
        average=s/(n-2);
	printf("%.2f",average);
        
	return 0;
}
