#include <stdio.h> 
int main(void){
  
  int k = 0, last = 0;

  scanf("%d",&k);

  last = k%10;
  
  switch (last) {
    case 1 :
    case 9 : 
      printf("1\n");
      break;
    case 2 :
    case 8 :
      printf("4\n");
      break;
    case 5 : 
      printf("5\n");
      break;
    case 4 :
    case 6 : 
      printf("6\n");
      break;
    case 3 : 
    case 7 : 
      printf("9\n");
      break;
    default:
      printf("0\n");
      break;
  }
  
printf("-------\n");

  if ((last == 1) || (last == 9)) {
    printf("1\n");
  } 
  else if ((last == 2) || (last == 8)) {
    printf("4\n");
  }
  else if (last == 5) {
    printf("5\n");
  }
  else if ((last == 4) || (last == 6)) {
    printf("6\n");
  }
  else if ((last == 3) || (last == 7)) {
    printf("9\n");
  } 
  else {
    printf("0\n");
  }

  return 0;
}