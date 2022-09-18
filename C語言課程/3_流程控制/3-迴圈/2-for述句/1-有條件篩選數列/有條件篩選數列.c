#include<stdio.h>

int main(){
    int a, b, n;
    printf("請輸入整數範圍：");
    scanf("%d%d", &a, &b);
    printf("請輸入要刪除的整數與其倍數：");
    scanf("%d", &n);
    for(int i=a; i<=b; i++){
        if(i%n!=0){
            printf("%d ", i);
        }
    }

    return 0;
}
