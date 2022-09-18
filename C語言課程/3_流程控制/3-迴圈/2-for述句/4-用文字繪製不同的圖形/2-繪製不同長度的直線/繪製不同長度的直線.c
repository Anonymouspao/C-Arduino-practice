#include<stdio.h>

int main(){
    int lth;
    printf("請輸入線段長度：");
    scanf("%d", &lth);
    for(int i=1; i<=lth; i++){
        printf("－");
    }

    return 0;
}
