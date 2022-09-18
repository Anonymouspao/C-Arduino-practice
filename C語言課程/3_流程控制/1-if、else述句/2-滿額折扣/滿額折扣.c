#include<stdio.h>

int main(){
    int ppl, prz;
    printf("請輸入用餐人數：");
    scanf("%d",&ppl);
    prz=ppl*300;
    if (prz<3000){
        printf("應付金額：%d\n", prz);
    }
    else{
        prz=prz*0.8;
        printf("應付金額：%d\n", prz);
    }

    return 0;
}
