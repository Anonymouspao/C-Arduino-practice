#include<stdio.h>

int main(){
    int price[6]={0, 100, 150, 599, 300, 1000};
    int tag, sum=0;
    printf("�п�J�ӽs���G\n");
    do{
        scanf("%d", &tag);
        sum+=price[tag];
        if(tag>=1){
            printf("�p�p�G%d\n", sum);
        }
    }while(tag>0);
    printf("�`���B�O�G%d��", sum);

    return 0;
}
