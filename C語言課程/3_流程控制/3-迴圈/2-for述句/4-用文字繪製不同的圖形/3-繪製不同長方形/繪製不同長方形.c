#include<stdio.h>

int main(){
    int l, w, a;
    do{
        printf("�п�J���e�]0�����^�G");
        scanf("%d%d", &l, &w);
        if(l==0||w==0){
            break;
        }
        printf("�п�J����Ϊ��榡�]1�G�񺡡B2�G�Ťߡ^�G");
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
