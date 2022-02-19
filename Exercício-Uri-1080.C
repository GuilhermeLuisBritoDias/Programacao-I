#include <stdio.h>
 
int main() {
 
    int n,p,maior,i;
    maior=0;
    p=0;
    for(i=1; i<=100; i++){
        scanf("%d",&n);
        
        if(n>maior){
            maior = n;
            p = i;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",p);
 
    return 0;
}