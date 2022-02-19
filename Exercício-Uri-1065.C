#include <stdio.h>
 
int main() {
 
    int i,soma,n;
    soma = 0;
    for(i= 1; i <= 5; i++){
        scanf("%d", &n);
        if(n%2 == 0){
            soma=soma+1;
        }
        
    }
    printf("%d valores pares\n", soma);
 
    return 0;
}