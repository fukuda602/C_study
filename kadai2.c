#include <stdio.h>

int main() {
int i, sum = 0;
 
 for (i = 0; i < 101; i++) {
      sum = sum + i;
}
   printf("1から100の合計は%dです。\n",sum);

  return 0;
}
