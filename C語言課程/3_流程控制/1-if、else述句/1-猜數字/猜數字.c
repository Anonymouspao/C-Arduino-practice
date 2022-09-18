#include<stdio.h>

int main(){
    int num, ans=314159;
    printf("請猜一個整數\n");
    scanf("%d",&num);
    if(num<ans){
        printf("再大一點");
    }
    else if(num>ans){
        printf("小一點");
    }
    else{
        printf("答對了！");
    }

    return 0;
}
