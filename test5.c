#include <stdio.h>

#define height 6
#define length 2

int main (void)
{
  int i,j;
  int tensu[height][length]={0};
  double average1=0;
  double average2=0;
  double sum1=0;
  double sum2=0;

  for(i=0;i<height;i++)
     for(j=0;j<length;j++){
          printf("请输入第%d名学生第%d门成绩。",i+1,j+1);
          scanf("%d",&tensu[i][j]); 
          if(j==0)
            sum1+=tensu[i][j];
          else
            sum2+=tensu[i][j];
}        

  average1=sum1/6;
  average2=sum2/6;

  printf("语文总分为%4.1f\n",sum1);
  printf("语文平均分为%4.1f\n",average1);
  printf("数学总分为%4.1f\n",sum2);
  printf("数学平均分为%4.1f",average2);
  
  return 0;
  
}
