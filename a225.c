#include<stdio.h>
int main(){
    int num=0;
    while(scanf("%d",&num)!=EOF){
        int a[1000]={0};
        for(int i=0;i<num;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<num;i++){
            for(int q=0;q<num-1;q++){
                if((a[q]%10)>(a[q+1]%10)){
                    int temp=a[q];
                    a[q]=a[q+1];
                    a[q+1]=temp;
                }
            }
        }
        for(int i=0;i<num;i++){
            for(int q=0;q<num-1;q++){
                if((a[q]%10)==(a[q+1]%10)){
                    if(a[q]<a[q+1]){
                        int temp=a[q];
                        a[q]=a[q+1];
                        a[q+1]=temp;
                    }
                }
            }
        }
        for(int i=0;i<num;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}