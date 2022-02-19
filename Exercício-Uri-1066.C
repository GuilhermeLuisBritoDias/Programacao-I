#include <stdio.h>
 
int main() {
 
    int i,soma_p,soma_i,posi,nega,n;
    soma_p = 0;
    soma_i = 0;
    posi = 0;
    nega = 0;
    for(i= 1; i <= 5; i++){
        scanf("%d", &n);
        if(n%2 == 0){
            soma_p=soma_p+1;
        }
        else{
            soma_i = soma_i+1;
        }
        
        if(n > 0){
            posi = posi+1;
        }
        else if(n < 0){
            nega=nega+1;
        }
        
        
        
    }
    printf("%d valor(es) par(es)\n", soma_p);
    printf("%d valor(es) impar(es)\n", soma_i);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", nega);
 
    return 0;
}