#include <stdio.h>
#include <stdlib.h>

int pertenceFibonacci(int num){
    int x=0, y=1, proximo=x+y; 

    if(num==0 || num==1){
        return 1;
    }

    while(num <= proximo){
        if(num==proximo){
            return 1;
        }
        x=y;
        y=proximo;
        proximo=x+y;
    }
}

int main(){
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if(pertenceFibonacci(num)){
        printf("O numero %d pertence a sequencia de Fibonacci!", num);
    } else {
        printf("O numero %d nao pertence a seuencia de Fibonacci!", num);
    }
}
