#include<stdio.h>

int main(){
    int ans=314159;
    int gss;
    while(gss!=ans){
        printf("猜一個正整數：");
        scanf("%d", &gss);
        if(gss>ans){
            printf("小一點\n");
        }
        else if(gss<ans){
            printf("大一點\n");
        }
        else{
            printf("答對了！");
        }
    }

    return 0;
}
