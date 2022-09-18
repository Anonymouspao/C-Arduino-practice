#include<stdio.h>

int main(){
    int a, b, c, avg1;

    printf("請輸入三個數值：");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    avg1=(a+b+c)/3;
    printf("三個數的平均值為：%d\n",avg1);

    float d, e, f, avg2;

    printf("請輸入三個數值：");
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);
    avg2=(a+b+c)/3;                         //"3"為整數，需先轉成浮點數才能做運算
    printf("三個數的平均值為：%f\n",avg2);

    float g, h, i, avg3;

    printf("請輸入三個數值：");
    scanf("%f", &g);
    scanf("%f", &h);
    scanf("%f", &i);
    avg3=(a+b+c)/3.;                        //"3."為浮點數
    printf("三個數的平均值為：%f\n",avg3);

    return 0;
}
