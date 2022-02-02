#include <stdio.h>
 
int main(void) {
    
    int first, last, ix;
    
    scanf("%d %d", &first, &last);
    
   
    for (; first <= last; ++first) {

        for (ix = 0; ix < first; ++ix) {
            
            printf("%4d", first);
        }
    }
    return 0;
}