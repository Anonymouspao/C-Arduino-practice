#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int ans, gss;
    ans=rand()%6+1;     //���ü�mod6�A�Ͻd��b1~6����
    do{
        scanf("%d", &gss);
        if(gss==ans){
            printf("����F�I");
            break;
        }
        if(ans>gss){
            printf("�j�@�I\n");
        }
        if(ans<gss){
            printf("�p�@�I\n");
        }
    }while(ans!=gss);

    return 0;
}
