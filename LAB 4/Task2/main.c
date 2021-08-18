#include<stdio.h>

int main(){

    int x,y;

    for(x=0;x<5;x++){
        for(y=0;y<11;y++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(x=10;x>0;x--){
        for(y=0;y<x;y++){
            printf("*");
        }
        printf("\n");
    }
    for(x=0;x<11;x++){
        for(y=0;y<x;y++){
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
