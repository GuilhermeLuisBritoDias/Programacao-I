#include <stdio.h>
 
int main() {
 
      float s,reajuste;
    scanf("%f", &s);
    if (s <= 400.00){
        reajuste = s*0.15;
        printf("Novo salario: %.2f\n",s+reajuste );
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if (s>400.00 && s <= 800.00){
        reajuste = s*0.12;
        printf("Novo salario: %.2f\n",s+reajuste );
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if (s > 800.00 && s<= 1200.00){
        reajuste = s*0.10;
        printf("Novo salario: %.2f\n",s+reajuste );
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if (s > 1200.00 && s<= 2000.00){
        reajuste = s*0.07;
        printf("Novo salario: %.2f\n",s+reajuste );
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else{
        reajuste = s*0.04;
        printf("Novo salario: %.2f\n",s+reajuste );
        printf("Reajuste ganho: %.2f\n",reajuste);
        printf("Em percentual: 4 %%\n");
    }
 
 
    return 0;
}