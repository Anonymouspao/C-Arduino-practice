#include<stdio.h>

int main(){
    float num, p=0, sum=0, avg=0, max=0, min=101;
    while(num!=-1){
        printf("請輸入各科成績(結束請輸入-1)：");
        scanf("%f", &num);
        p++;
        if(num==-1){
            break;
        }
        if(num>=max){
            max=num;
        }
        if(num<min){
            min=num;
        }
        sum+=num;
    }
    avg=sum/p;
    printf("結果如下：\n總分：%f分,\n平均：%f分,\n最高：%f分,\n最低：%f分,\n", sum, avg, max, min);

    return 0;
}
