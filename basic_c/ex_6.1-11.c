#include <stdio.h>

#define DAYS_IN_JANUARY     (31)
#define DAYS_IN_FEBRARY     (28)
#define DAYS_IN_MARCH       (31)
#define DAYS_IN_APRIL       (30)
#define DAYS_IN_MAY         (31)
#define DAYS_IN_JUNE        (30)
#define DAYS_IN_JULI        (31)
#define DAYS_IN_AUGUST      (31)
#define DAYS_IN_SEPTEMBER   (30)
#define DAYS_IN_OCTOBER     (31)
#define DAYS_IN_NOVEMBER    (30)
#define DAYS_IN_DECEMBER    (31)

int main() {
    int month, day;
    int dayOfYear = 0;
    scanf("%d %d", &month, &day);
    
    switch (month) { 
        case 12: dayOfYear += DAYS_IN_NOVEMBER;
        case 11: dayOfYear += DAYS_IN_OCTOBER;
        case 10: dayOfYear += DAYS_IN_SEPTEMBER; 
        case 9:  dayOfYear += DAYS_IN_AUGUST; 
        case 8:  dayOfYear += DAYS_IN_JULI;        
        case 7:  dayOfYear += DAYS_IN_JUNE; 
        case 6:  dayOfYear += DAYS_IN_MAY; 
        case 5:  dayOfYear += DAYS_IN_APRIL;  
        case 4:  dayOfYear += DAYS_IN_MARCH;    
        case 3:  dayOfYear += DAYS_IN_FEBRARY;      
        case 2:  dayOfYear += DAYS_IN_JANUARY; 
        case 1:  dayOfYear += day;
             printf("%d\n", dayOfYear);
             break;
        default: printf("ERROR!\n");
    }
    
    return 0;
}