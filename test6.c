#include<stdio.h>
#include<math.h>
 
int main()
{
	int n,i,j,s,t;
	int a[202];
	
	scanf("%d",&n);
	a[0]=n;
	for(s=1;s<=n;s++){
	 	for(i=1;i<n;i++){
	 	    scanf("%d",&a[i]);
}
	 	for(i=0;i<n-1;i++){
	 	    for(j=i+1;j<n;j++){
	 	        if(fabs(a[i])<fabs(a[j])){
	 		    t=a[i];
	 	      	    a[i]=a[j];
	 		    a[j]=t;
}
}
}
	 	for(i=0;i<n-1;i++){
	 	    printf("%d ",a[i]);
}
	 	    printf("%d\n",a[i]);
}
	 return 0;
}
