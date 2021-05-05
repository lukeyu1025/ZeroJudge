#include <stdio.h>
int main()
{
  int y1,m1,d1;
  int y2,m2,d2;
  scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
  int day1,day2;
  for(int i=0;)
  day1+=365*(y1-1);
  for(int i=1;i<m1;i++){
      if(i==1) day1+=31;
      if(i==2) day1+=28;
      if(i==3) day1+=31;
      if(i==4) day1+=30;
      if(i==5) day1+=31;
      if(i==6) day1+=30;
      if(i==7) day1+=31;
      if(i==8) day1+=31;
      if(i==9) day1+=30;
      if(i==10) day1+=31;
      if(i==11) day1+=30;
      if(i==12) day1+=31;
  }
  day1+=d1;
  day2+=365*(y2-1);
  for(int i=1;i<m2;i++){
      if(i==1) day2+=31;
      if(i==2) day2+=28;
      if(i==3) day2+=31;
      if(i==4) day2+=30;
      if(i==5) day2+=31;
      if(i==6) day2+=30;
      if(i==7) day2+=31;
      if(i==8) day2+=31;
      if(i==9) day2+=30;
      if(i==10) day2+=31;
      if(i==11) day2+=30;
      if(i==12) day2+=31;
  }
  printf("%d %d\n",day1,day2);
  day2+=d2;
  if(day1>day2){
   printf("%d",day1-day2);
  }
  if(day1<day2){
   printf("%d",day2-day1);   
  }
}
