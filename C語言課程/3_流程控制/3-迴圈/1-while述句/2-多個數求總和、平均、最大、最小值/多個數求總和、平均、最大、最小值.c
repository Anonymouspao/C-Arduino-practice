#include<stdio.h>

int main(){
    float num, p=0, sum=0, avg=0, max=0, min=101;
    while(num!=-1){
        printf("�п�J�U�즨�Z(�����п�J-1)�G");
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
    printf("���G�p�U�G\n�`���G%f��,\n�����G%f��,\n�̰��G%f��,\n�̧C�G%f��,\n", sum, avg, max, min);

    return 0;
}
