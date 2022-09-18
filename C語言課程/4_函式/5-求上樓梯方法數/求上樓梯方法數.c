#include<stdio.h>

int sf(int stairs){
    if(stairs==1||stairs==2){
        return stairs;
    }
    else{
        return sf(stairs-1)+sf(stairs-2);
    }
}

int main(){
    int stairs, ans=0;
    do{
        printf("½Ğ¿é¤J¶¥±è¼Æ¡G");
        scanf("%d", &stairs);
        ans=sf(stairs);
        printf("%d\n", ans);
    }while(stairs!=0);

    return 0;
}
