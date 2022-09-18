#include<stdio.h>

int main(){
    char letter;
    printf("請輸入一個大寫英文字母：");
    scanf("%c",&letter);
    printf("你輸入的字母是：%c\n",letter);
    letter=letter+32;                       //字元"char"是用ASCII格式，把字母編號(變成整數)，可作加減
    printf("小寫是：%c",letter);

    return 0;
}
