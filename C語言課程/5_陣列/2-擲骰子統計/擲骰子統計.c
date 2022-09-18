#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int sum, num_roll;
    printf("請輸入擲骰子的次數；");
    scanf("%d", &num_roll);
    int dice[13]={0};    //指定陣列初始值=0

    for(int i=1; i<=num_roll; i++){
        int Dice1=rand()%6+1, Dice2=rand()%6+1;
        sum=Dice1+Dice2;
        dice[sum]++;
//alt1:
//        for(int j=2; j<=13; j++){
//            if(sum==j){
//                dice[j]++;
//            }
//        }
//alt2:
//        switch(sum){
//        case 1: dice[1]++; break;
//        case 2: dice[2]++; break;
//        case 3: dice[3]++; break;
//        case 4: dice[4]++; break;
//        case 5: dice[5]++; break;
//        case 6: dice[6]++; break;
//        case 7: dice[7]++; break;
//        case 8: dice[8]++; break;
//        case 9: dice[9]++; break;
//        case 10: dice[10]++; break;
//        case 11: dice[11]++; break;
//        case 12; dice[12]++; break;
//        }
    }
    printf("統計結果如下：\n");
    for(int j=2; j<=13; j++){
        printf("%d：%d\n", j, dice[j]);
    }

    return 0;
}
