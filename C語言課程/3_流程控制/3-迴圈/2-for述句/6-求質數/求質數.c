#include<stdio.h>

int main(){
    int num, i, n=0;
    do{
        printf("�п�J�j��1����ơ]0�����^�G");
        scanf("%d", &num);
        if(num==0){
            break;
        }
        for(i=num-1; i>=2; i--){
            if(num%i==0){
                n=1;
                break;
            }
            else{
                n=0;
            }
        }
        if(n==1){
            printf("%d���O���\n", num);
        }
        else{
            printf("%d�O���\n", num);
        }
    }while(num!=0);

    return 0;
}
