#include<stdio.h>

int main(){
    int l, w, a;
    do{
        printf("請輸入長寬（0結束）：");
        scanf("%d%d", &l, &w);
        if(l==0||w==0){
            break;
        }
        printf("請輸入長方形的格式（1：填滿、2：空心）：");
        scanf("%d", &a);
        if(a==1){
            for(int i=1; i<=w; i++){
                for(int j=1; j<=l; j++){
                    printf("*");
                }
                printf("\n");
            }
        }
        if(a==2){
            for(int i=1; i<=w; i++){
                for(int j=1; j<=l; j++){
                    if(i==1||i==w||j==1||j==l){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    }while(l!=0&&w!=0);

    return 0;
}
