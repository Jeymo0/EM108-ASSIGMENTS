#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void caesar(char* input, int key){

    int i;

    if(key>26)
        key = key % 26;

    for(i=0;i<strlen(input);i++){
        if((input[i]+key>=65) && (input[i]+key<=90)||(input[i]+key>=97) && (input[i]+key<=122)){
            input[i]=input[i]+key;
        }
        else if(input[i]==' '||input[i]=='\n'){
            input[i]=input[i];
        }
        else{
            input[i]=input[i]+(key-26);
        }
    }
}

int main(){

    char code[100];
    int key = 15;

    printf("Welcome to my Caesar Ciper program \n");
    printf("Please enter the key for encyption( must be greater than 26): \n");
    scanf("%d",&key);

    printf("Please enter the text you want to be encrypted finishing with a ?: \n");
    scanf("%[^?]",code);
    caesar(code,key);

    printf("Code is: %s\n", code);

    return(0);
}
