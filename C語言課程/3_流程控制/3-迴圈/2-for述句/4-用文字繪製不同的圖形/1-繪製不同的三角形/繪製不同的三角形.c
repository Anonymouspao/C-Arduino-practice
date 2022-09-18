#include<stdio.h>

int main(){
    int n, a, b, i, j, k, l, m, p, q, t;

    do{
        printf("請輸入層數：");
        scanf("%d", &n);
        if(n<=0){
            printf("輸入錯誤");
            break;
        }
        printf("請輸入格式（1：實心、2：空心，3：置左、4：置右）：");
        scanf("%d%d", &a, &b);

        if(a==1){
            if(b==3){
                for(i=1; i<=n; i++){
                    for(j=1; j<=i; j++){
                        printf("*");
                    }
                    printf("\n");
                }
            }
            if(b==4){
                for(i=1; i<=n; i++){
                    for(k=1; k<=n-i; k++){
                        printf(" ");
                    }
                    for(j=1; j<=i; j++){
                        printf("*");
                    }
                    printf("\n");
                }
            }
        }
        if(a==2){
            if(b==3){
                printf("*\n**\n");
                for(l=1; l<=n-3; l++){
                    printf("*");
                    for(m=1; m<=l; m++){
                        printf(" ");
                    }
                    printf("*\n");
                }
                for(p=1; p<=n; p++){
                    printf("*");
                }
                printf("\n");
            }
            if(b==4){
                for(q=1; q<=n; q++){
                    for(t=1; t<=n; t++){
                        if(q==5||t==n||(q+t==n+1)){
                            printf("*");
                        }
                        else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            }
        }
    }while(n>0);

    return 0;
}
