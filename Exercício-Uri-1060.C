#include <stdio.h>
 
int main() {
 
         float a,n;
         int soma = 0;
         for( a = 1; a <= 6; a= a+1){
                    scanf("%f",&n);
                    if(n>0){
                        soma =soma+1;
                    }
                  }
                    printf("%d valores positivos\n", soma);
 
    return 0;
}