#include <stdio.h>

int main()
{
    int score=0;
    int point=0;
    while(scanf("%d",&score)!=EOF){
    if(score>=0&&score<=100){
    if(score>=0&&score<=10)
    point=score*6;
    if(score>=11&&score<=20)
    point=60+(score-10)*2;
    if(score>=21&&score<=39)
    point=80+(score-20)*1;
    if(score>=40)
    point=100;
    
    printf("%d\n",point);
    }
    }
}
