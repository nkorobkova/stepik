#include <stdio.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "");
  int a,b;
  char c;
  
  scanf ("%d %d %c", &a, &b, &c);
  switch (c) {
    case '+' : { printf ("%.2lf", ((double)a + (double)b)); break; }
    case '-' : { printf ("%.2lf", ((double)a - (double)b)); break; }
    case '*' : { printf ("%.2lf", ((double)a * (double)b)); break; }
    case '/' : {
      switch (b) {
        case 0 : { printf ("ERROR!\n"); break; }
        default: { printf ("%.2lf", (double)a/(double)b); break; }
      }
      break;
    }
    default: {
        printf("ERROR!\n");
        break;
    }
    return 0;
  }
}