#include <stdio.h>
int main(){
    int x, c, sum = 0;
    
  for(;;){
     scanf("%d", &x);
     sum = sum + x;
     scanf("%d", &c);  
  if((c = getchar()) == 'n')
        break;	
} 
     printf("%d\n",sum);

 return 0;

}			
