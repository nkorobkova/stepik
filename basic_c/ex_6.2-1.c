#include <stdio.h>

int main(void) { 
  
  int x,y;
   scanf ("%d %d", &x, &y);
    
    switch (x) {
    case 1: printf("%d\n", x==y ); break;
    case 0: printf("%d\n", x!=y ); break;
      default: printf("ERROR!\n"); break;
    }
  return 0;
}

