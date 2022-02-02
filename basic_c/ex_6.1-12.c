#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "");
    
    int age;
    scanf("%d", &age);
    switch(age)
    {
        case 11:
        case 12:
        case 13:
        case 14:
            printf("Мне %d лет", age);
            break;
        default:
            switch(age%10)
            {
                case 1: 
                    printf("Мне %d год", age);
                    break;
                case 2:
                case 3:
                case 4:
                    printf("Мне %d года", age);
                    break;
                default:
                    printf("Мне %d лет", age);
            }
          
    }
    
  return 0;
}

