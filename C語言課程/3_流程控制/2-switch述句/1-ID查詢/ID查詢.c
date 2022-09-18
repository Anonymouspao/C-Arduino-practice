#include<stdio.h>

int main(){
    int ID;
    printf("½Ð¿é¤JID¸¹½X¡G");
    scanf("%d",&ID);
    switch(ID){
        case 1:
            printf("a");
            break;
        case 2:
            printf("b");
            break;
        case 3:
            printf("c");
            break;
        default:
            printf("error");
            break;
    }

    return 0;
}
