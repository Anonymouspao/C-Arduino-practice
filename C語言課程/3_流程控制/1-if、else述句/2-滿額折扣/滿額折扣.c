#include<stdio.h>

int main(){
    int ppl, prz;
    printf("�п�J���\�H�ơG");
    scanf("%d",&ppl);
    prz=ppl*300;
    if (prz<3000){
        printf("���I���B�G%d\n", prz);
    }
    else{
        prz=prz*0.8;
        printf("���I���B�G%d\n", prz);
    }

    return 0;
}
