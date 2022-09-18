#include<stdio.h>

int main(){
    int price[6]={0, 100, 150, 599, 300, 1000};
    int tag, sum=0;
    printf("請輸入商編號：\n");
    do{
        scanf("%d", &tag);
        sum+=price[tag];
        if(tag>=1){
            printf("小計：%d\n", sum);
        }
    }while(tag>0);
    printf("總金額是：%d元", sum);

    return 0;
}
