#include<stdio.h>

int main(){
    int ans=314159;
    int gss;
    while(gss!=ans){
        printf("�q�@�ӥ���ơG");
        scanf("%d", &gss);
        if(gss>ans){
            printf("�p�@�I\n");
        }
        else if(gss<ans){
            printf("�j�@�I\n");
        }
        else{
            printf("����F�I");
        }
    }

    return 0;
}
