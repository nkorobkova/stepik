#include <stdio.h>
#include <stdio.h> 
int main(void){

    char sex;
    int age, height, weight;
    double bov;

    /* Input format: <sex> <age> <height> <weight>
    * Sample: m 25 178 67
    */
    scanf("%c %d %d %d", &sex, &age, &height, &weight);
        
    switch (sex) {
        case 'f': {
            bov = 10*weight + 6.25*height - 5*age - 161;
            break;    
        }
        case 'm': {
            bov = 10*weight + 6.25*height - 5*age + 5;
            break;    
        }
        default: {
            printf("ERROR!\n");
            return 0;
        }
    }

    printf("|  BMR  |\n");
    printf("|%7.2f|\n", bov);

    return 0;
}