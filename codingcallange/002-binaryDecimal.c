#include <stdio.h>
#include <limits.h>

int binaere(int dec_num) {
    int bin_num = 0;
    int i = 0;
  while (dec_num > 0) {
    bin_num += (dec_num % 2) << i;
    dec_num /= 2;
    i++;
  }
  return bin_num;
}

int binaerZiffer ( int dec_num){
    int max_Ziffer = 0;
    while(dec_num > 0 ){
        printf("Dec_akt %d \n", dec_num%10);
        if(dec_num%10 > max_Ziffer){
            max_Ziffer = dec_num%10;
        }
    dec_num /=10;
    }
return max_Ziffer;
}
int main() {
  int line1 = 0;
   int line = 0;
  scanf("%d", &line1);
  for (int i = 0 ;i< line1; i++){
      scanf("%d", &line);
      int result = binaerZiffer(line);
      printf("%d \n",result);
  }
  return 0;
}