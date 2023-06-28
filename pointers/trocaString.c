#include<stdio.h>

void trocaSting(char *origem,char *destino){
    while(*origem != '\0'){
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
}

int main(){
    char origem[] = "Hello World";
    char destino[50] = "";
    trocaSting(origem,destino);
    printf("String trocada: %s\n",destino);
    return 0;
}