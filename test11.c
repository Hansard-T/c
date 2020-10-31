#include <stdio.h>

int main (void)
{
    int m,n;
    int s;
    
    while(scanf("%d  %d",&n,&m)!=EOF)
    {
        int v[n];
     
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
}
    for(int a=0;a<n-1;a++)
    {
        if(v[a]<v[a+1])
            s=v[a];
            v[a]=v[a+1];
            v[a+1]=s;
}
    if(n>m)
        for(int j=0;j<m;j++)
        {
            printf("%d",v[j]);
}
    else
        for(int j=0;j<n;j++)
        {    
            printf("%d",v[j]);
}
}
    return 0;
}
