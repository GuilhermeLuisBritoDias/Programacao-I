#include <stdio.h>
 
int main() {
 
  int x, n, in, out, i;
  
    scanf("%d", &x);
    in = 0;
    out = 0;
  
    for(i=0;i<x;i++){
        scanf("%d",&n);
        if((n>=10) && (n<=20)){
            in=in+1;
        }else{
            out=out+1;
        }
    }
  
    printf("%d in\n", in);
    printf("%d out\n",out);
 
    return 0;
}