







#include <stdio.h>
#include <limits.h>



int binaerZiffer ( char string[]){
char result[] = string;


return result;
}


int main() {
  int line = 0;
   char input [] = 0;
  scanf("%d", &input);
  for (int i = 0 ;i< line; i++){
      scanf("%d", &line);
      int result = binaerZiffer(input);
      printf("%d \n",result);
  }
  return 0;
}