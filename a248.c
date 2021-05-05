#include <stdio.h>
int main()
{
  int a=0;
  while(scanf("%d",&a)!=EOF){
      int b=0;
      int c=0;
      scanf("%d%d",&b,&c);
      int num=0;
      num=a/b;
      a=a%b;
      a*=10;
      printf("%d.",num);
      for(int i=1;i<=c;i++){
          num=a/b;
          a=a%b;
          a*=10;
          printf("%d",num);
      }
      printf("\n");
  }
}
