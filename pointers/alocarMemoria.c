#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Insira o tamanho da array: ");
    scanf("%d",&size);
    int *arr =(int*) malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        printf("Insira um valor para a posicao %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}