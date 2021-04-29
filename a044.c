#include <stdio.h>

int main()
{
   int a =0;
   while(scanf("%d",&a)!=EOF){
       printf("%d\n",(a*a*a+5*a+6)/6);
   }
}
