#include<stdio.h>

int main(){
    int a, b, num=0, max, rng;
    printf("請輸入一段整數的範圍：");
    scanf("%d%d", &a, &b);
    printf("請輸入想要求的值的範圍：");
    scanf("%d", &rng);
    max=a;
    printf("前%d個值為：", rng);
    for(int i=a; i<=b; i++){
        if(i%3==2&&i%5==3&&i%7==2){
            if(i>=a){
                max=i;
            }
            num+=1;
            if(num<=rng){
                printf("%d ");
            }
        }
    }
    printf("\n最大值為：%d\n", max);
    if(num==0){
        printf("無");
    }

    return 0;
}
