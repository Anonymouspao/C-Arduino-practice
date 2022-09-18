#include<stdio.h>

int main(){
    int a, b, c;
    printf("請輸入三角形的三個內角：");
    scanf("%d%d%d", &a, &b, &c);
    if(a+b+c==180){
        if(a==b&b==c&a==c){
            printf("正三角形");
        }
        else if(a==b||b==c||a==c){
            printf("等腰三角形");
        }
        else{
            printf("其他三角形");
        }
    }
    else{
        printf("輸入錯誤");
    }

    return 0;
}
