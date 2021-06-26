#include <stdio.h>

int main() {
int date[10];
int i, sum = 0;

   for(i = 0; i < 10; i++){
         printf("数値を入力してください。\n");
         scanf("%d" ,&date[i]);
         sum = sum + date[i];
  }
   printf("合計は%dです。\n", sum);

   return 0;
 }
