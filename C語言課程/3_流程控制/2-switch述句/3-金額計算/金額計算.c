#include<stdio.h>

int main(){
    int num, ttl=0;
    do{
        printf("�п�J���~�s��(��J0�H����)�G");
        scanf("%d", &num);
        switch(num){
        case 1:
            ttl+=100;
            break;
        case 2:
            ttl+=270;
            break;
        case 3:
            ttl+=590;
            break;
        case 4:
            ttl+=350;
            break;
        case 5:
            ttl+=999;
            break;
        }
    }while(num!=0);

    printf("�`���B�O�G%d", ttl);

    return 0;
}
