#include <stdio.h>
int main()
{
   char a[9];
   int pass=0;
   while(scanf("%s",&a)!=EOF){
   for(int i=0;i<=5;i++){
        int pass=abs(a[i+1]-a[i]);
        printf("%d",pass);
   }
   printf("\n");
   }
   return 0;
}
