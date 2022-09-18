#include<stdio.h>

int main(){
    int a, b, c;
    printf("請輸入三角形的三個邊長：");
    scanf("%d%d%d",&a, &b, &c);
    if(a+b>c&b+c>a&a+c>b){
        if(a==b&b==c&a==c){
            printf("正三角形");
        }
        else if(a==b||b==c||a==c){
            printf("等腰三角形");
            if(a*a+b*b==c*c){
                printf("等腰直角三角形");
            }
        }
        else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
            printf("直角三角形");
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
