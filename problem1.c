#include <stdio.h>
int t = 0; 
int i; 

int add(){
  //multiples are below 1000 
  for (i = 2 ; i < 1000 ; i++){
    if (i % 3 == 0){  //multiplies of 3 and 5 and no two of the same one
      t += i;
    }
    else if (i % 5 == 0){
      t += i;
    }
  }
  return 0;
}

int main(){
   add();
   printf("%d \n", t);
   return 0;

}
