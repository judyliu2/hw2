#include <stdio.h>
int i; 
int t;
int c;

int multiple(){
  for (i = 2520; i <1000000000; i += 2520){
    //looking for smallest number thats divisible by 1~2 starting from 2520

    c = 0; //resets for every loop
    
    for (t = 20; t > 2; t -= 1){
      //checking if i  is divisble by 2~20, we already knowthat all ints are divisible by 1
      
      if (i % t == 0){
	//make sure all the numbers previous are multiples
	c += 1;
	
	//if t can interate to through 20 to 3, that means the answer is found
	if (c == 18){
	printf( "%d \n", i);
	return 0;
	}
      }
      
    }
  }  
}

int main(){
  multiple();
  return 0;
}
