#include <stdio.h>
int main()
{
  int y1,m1,d1;
  int y2,m2,d2;
  while(scanf("%d",&y1)!=EOF){
  scanf("%d%d%d%d%d",&m1,&d1,&y2,&m2,&d2);
  int day1=0;
  int day2=0;
  day1+=365*(y1-1)+(y1-1)/4-(y1-1)/100+(y1-1)/400;
  for(int i=1;i<m1;i++){
      if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) day1+=31;
      if(i==4||i==6||i==9||i==11) day1+=30;
      if(i==2){
          day1+=28;
          if(y1%4==0&&y1%100!=0||y1%400==0){
              day1+=1;
          }
      }
  }
  day1+=d1;
  day2+=365*(y2-1)+(y2-1)/4-(y2-1)/100+(y2-1)/400;
  for(int i=1;i<m2;i++){
      if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) day2+=31;
      if(i==4||i==6||i==9||i==11) day2+=30;
      if(i==2){
          day2+=28;
          if(y2%4==0&&y2%100!=0||y2%400==0){
              day2+=1;
          }
      }
  }
  day2+=d2;
  if(day1>day2){
   printf("%d\n",day1-day2);
  }
  if(day1<day2){
   printf("%d\n",day2-day1);   
  }
  }
}
