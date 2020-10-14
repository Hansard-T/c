#include<stdio.h>
  int main (void)
{   
    int i,j;
    int v[j];

    printf("数据个数：");
    scanf("%d",&i);
    
    for(j=0;j<i;j++){
	printf("%d号:",j+1);
        scanf("%d",&v[j]);
        }
    
    printf("{");
    for(j=0;j<i;j++){
    if(j<i-1)
    printf("%d, ",v[j]);
    else
    printf("%d",v[j]);
    }
    printf("}");
    
    return 0;
}
