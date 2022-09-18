#include<stdio.h>

int main(){
    int num;
    printf("請輸入一個正整數：");
    scanf("%d", &num);
    printf("%d的正因數有：", num);
    for(int i=1; i<=num; i++){
        if(num%i==0){
            printf("%d ", i);
        }
    }

    return 0;
}
