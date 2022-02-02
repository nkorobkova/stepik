#include <stdio.h>

int main(void) {

   int K,M,i,sum;
    scanf("%d %d", &K, &M); 
    
   for (int i = K; i <= M; i++) {
        for (int n=0; n<i; n=i) {
            printf("%d ", i);
        }
   }
        printf("\n");
    
    if (K>0 && M>0) {
        printf("%d\n", sum=M-K+1);}
    if (K<0 && M>0) {
        printf("%d\n", sum=M);}
    if (K<0 && M<0) { 
        printf("%d\n", sum=0);}
     
    return 0;
}

