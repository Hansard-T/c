#include <stdio.h>

int main (void)
{
	int i;
        int a=0;

	for(i=2;i<=100;i++){
            int j,s;
            s=1;
	        for(j=2;j<i;j++){
	            if(i%j==0){
		        s=0;	
		        break;  
}
}
        if(s==1){     
	    printf("%d  ",i);
	    a += 1;
}
                if(a%5==0)
	             putchar('\n');
}
	return 0;
}
