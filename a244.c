#include <stdio.h>

int main()
{
   int num=0;
   scanf("%d",&num);
   for(int i=1;i<=num;i++){
        long int  a=0;
        long int  b=0;
        long int  c=0;
       scanf("%ld%ld%ld",&a,&b,&c);
       if(a==1){
           printf("%ld\n",b+c);
       }
       if(a==2){
           printf("%ld\n",b-c);
       }
       if(a==3){
           printf("%ld\n",b*c);
       }
       if(a==4){
           printf("%ld\n",b/c);
       }
   }
}
