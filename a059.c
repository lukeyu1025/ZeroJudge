#include <stdio.h>
#include<math.h>
int main()
{
    int count =0;
    scanf("%d",&count);
    int a=0;
    int b=0;
    int ques=0;
    for(int i=1;i<=count;i++){
        ques+=1;
        int sum=0;
        scanf("%d%d",&a,&b);
        for(int p=1;pow(p,2)<=b;p++){
            if(pow(p,2)>=a){
                sum+=pow(p,2);
            }
        }
        printf("Case %d: %d\n",ques,sum);
    }
}
