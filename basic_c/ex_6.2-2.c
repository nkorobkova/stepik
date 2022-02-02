#include <stdio.h>

int main(void) { 
  
  double x,y;
   scanf ("%lf %lf", &x, &y);
    
     printf("%d\n", (1 * ((x*y)>0))  );
     // + (((-x)*y)<0)*2 + ((x*(-y))<0)*3 + (((-x)*(-y))>0)*4 ) 
     return 0;
}