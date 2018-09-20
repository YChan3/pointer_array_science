#include <stdio.h>
#include <time.h>

int main(){
  int ray_one[10];
  srand(time(NULL));
  int counter;
  for(counter = 9; counter >= 0; counter--){
    ray_one[counter] = rand();
  }
  ray_one[9] = 0;
  for(counter = 0; counter < 10; counter++){
    printf("value number: %d, in ray_one: %d \n", counter, ray_one[counter]);
  }
  printf("\n");
  int ray_two[10];
  int *rop = ray_one;
  int *rtp = ray_two;
  for(counter = 9; counter >= 0; counter--){
    *(rtp + counter) = *(rop + 9 - counter);
  }
  for(counter = 0; counter < 10; counter++){
    printf("value number: %d, in ray_two: %d \n", counter, ray_two[counter]);
  }
}
