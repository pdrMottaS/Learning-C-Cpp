#include<stdio.h>
#include<locale.h>

int somaArray(int *ptrX, int lenght){
    int total = 0;
    for(int i = 0; i<lenght; i++){
        total += *ptrX;
        ptrX++;
    }
    return total;
}

int main(){
    int x[] = {1,2,3,4,5};
    printf("Somando todos os valores...\n");
    int total = somaArray(x,(sizeof(x)/sizeof(x[0])));
    printf("Total: %d",total);
    return 0;
}