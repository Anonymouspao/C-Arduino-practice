#include<stdio.h>

int main(){
    int a, b, i;
    printf("�п�J��Ƥ��M�G");
    scanf("%d", &a);
    printf("�п�J��Ѥ��n�G");
    scanf("%d", &b);
    for(i=1; 1<=a/2; i++){
        int j=a-i;
        if(i*j==b&&i<=j){
            printf("%d,%d\n", i, j);
        }
    }

    return 0;
}
llll
