#include <stdio.h>
#include<string.h>
int main()
{
 int day=0;
 scanf("%d",&day);
 for(int i=1;i<=day;i++){
     char a[100000]={0};
     int x,y,z,w,n,m;
     scanf("%d%d%d%d%d",&x,&y,&z,&w,&n,&m);
     gets(a);
     int p=0;
     for(i=0;i<strlen(a);i++){
         if(a[i]==1)m+=x;
         if(a[i]==2)m+=y;
         if(a[i]==3)m-=z;
         if(a[i]==4){
             m-=w;
             if(p==0){
                 m-=(strlen(a)-2)*n;
                 p++;
             }
         }
     }
     if(m>0){
         printf("%d\n",m);
     }
     else{
         printf("bye~Rabbit\n");
     }
 }
}