#include<stdio.h>
#include<locale.h>

void troca(int *ptrX, int *prtY){
    int temp = *ptrX;
    *ptrX = *prtY;
    *prtY = temp;
}

int main(){
    setlocale(LC_ALL,"");
    int x;
    int y;
    printf("Insira um valor: ");
    scanf("%d",&x);
    printf("Insira outro valor valor: ");
    scanf("%d",&y);
    printf("Os valores inseridos foram: %d e %d\n", x, y);
    printf("trocando...\n");
    troca(&x,&y);
    printf("Os valores trocados são: %d e %d\n", x, y);
    return 0;
}