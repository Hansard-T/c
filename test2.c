#include <stdio.h>
  int main (void)
{
  int a;
  int b;
  int i; 
 
  printf("输入两门课的成绩：");
  scanf("%d",&a);
  scanf("%d",&b);
  
  if(a<0||a>100||b<0||b>100){
    printf("it is error.");
 }
  
  if(a>=0&&a<=100&&b>=0&&b<=100){
    if(a/60==1&&b/60==1)
	  i=1;
    else
	  i=0;  
}  
  
  switch(i){
	  case 0:puts("it is not pass.");  break;
	  case 1:puts("it is pass.");  break;
  }

  return 0;
}

