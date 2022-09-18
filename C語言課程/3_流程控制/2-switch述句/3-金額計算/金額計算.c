#include<stdio.h>

int main(){
    int num, ttl=0;
    do{
        printf("請輸入產品編號(輸入0以結算)：");
        scanf("%d", &num);
        switch(num){
        case 1:
            ttl+=100;
            break;
        case 2:
            ttl+=270;
            break;
        case 3:
            ttl+=590;
            break;
        case 4:
            ttl+=350;
            break;
        case 5:
            ttl+=999;
            break;
        }
    }while(num!=0);

    printf("總金額是：%d", ttl);

    return 0;
}
