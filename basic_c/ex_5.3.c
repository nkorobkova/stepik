#include <stdio.h>
#include <math.h>

int main(void) {
    
    double p,z,x;
    unsigned int heigth;
    
    scanf("%d",&heigth);
    
    //z = pow(10,-4) * 1.25;
    x = (-1.0) * z * (double)heigth;
    
    x = -heigth*z;

    p = 1.29 * exp(x);
    
    printf( "%.2lf\n", p);
    
    return 0;
}