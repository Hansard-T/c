#include <stdio.h>

int main (void)
{
	int a,n;
	int s=1;
	scanf("%d",&n);
	
	int v[n];
	v[0]=n;
	
	if(n%2!=0)
	    s=n;
	else
	    s=1;
	
	for(a=1;a<n;a++){
	    scanf("%d",&v[a]);
	        if(v[a]%2!=0){
	             s*=v[a];
}
}
        printf("%d",s);

	return 0;
}
        

	

