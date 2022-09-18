#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int ans, gss;
    ans=rand()%6+1;     //取亂數mod6，使範圍在1~6之間
    do{
        scanf("%d", &gss);
        if(gss==ans){
            printf("答對了！");
            break;
        }
        if(ans>gss){
            printf("大一點\n");
        }
        if(ans<gss){
            printf("小一點\n");
        }
    }while(ans!=gss);

    return 0;
}
