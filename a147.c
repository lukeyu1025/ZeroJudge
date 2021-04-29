
#include <stdio.h>

int main()
{
    int num=5; 
    scanf("%d",&num);
    while(num!=0){
        for(int i=1;i<num;i++){
            if(i%7!=0)
            printf("%d ",i);
        }
    printf("\n");
    scanf("%d",&num);
    }
}
