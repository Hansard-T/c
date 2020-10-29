#include <stdio.h>

int main()
{
    int m, n;
    int number=0;
    double v[50][5];
    double average[50];
    double average1[5];
    double sum,sum1;
    
    while(scanf("%d  %d",&n,&m)!=EOF ){
        number=0;

    for(int a=0;a<n;a++)
        for(int b=0; b<m;b++)
            scanf("%lf",&v[a][b]);
		
    for(int a=0;a<n;+a++){
        sum=0;
        for(int b=0;b<m;b++)
            sum += v[a][b];
            average[a]=sum/m;
}
    for(int b=0; b<m;b++){
        sum= 0;
        for(int a=0;a<n;a++)
            sum1 += v[a][b];
            average1[b] = sum1/n;
}
    for(int a=0;a<n;a++){
        int i=1;
            for(int b=0;b<m;b++){
                if(v[a][b]<average1[b])
                    i=0;
}
     if(i==1) 
         number++;
}

    printf( "%.2lf",average[0] );
    for(int a=1;a<n;a++)
        printf("%.2lf",average[a] );
        putchar('\n');

    printf("%.2lf",average1[0] );
    for(int a=1;a<m;a++)
            printf("%.2lf",average1[a] );
            putchar('\n');
		
    printf("%d\n\n",number);
}
    return 0;
}
