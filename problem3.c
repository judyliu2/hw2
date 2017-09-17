#include <stdio.h>

int sumsquare(int i){ //sum of squares of numbers 1 to i
  int sum;
  
  if (i == 0){
    return 0;
  }
  if (i == 1){
    return 1;
  }
  else{
    sum = i*i + sumsquare(i -1);
    return sum;
  }
}

int sum(int i){ // sum of numbers 1 to i
  int sums;
  if (i == 0){
    return 0;
  }
  if (i == 1){
    return 1;
  }
  else{
    sums = i + sum( i -1);
   
  }
  return sums;
}

int sumdif(int a ){ //differences between square of sums and sum squared
  return sum(a)*sum(a) - sumsquare(a);
}

int main(){
  printf( "%d \n", sumdif(10));
  return 0;
}
