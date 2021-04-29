#include <stdio.h>

int main()
{
    int num=0;
    while(scanf("%d",&num)!=EOF){
        int total=0;
        for(int i=1;i<=num;i++){
            int score=0;
            scanf("%d",&score);
            total+=score;
        }
        if(((float)total/num)>59){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
}
