int i; 
int t; 

for (i = 2520; i <1000; i += 20){
  for (t = 20; t > 2; t -= 1){
    if (i % t == 0){
      printf( "%d", i);
    }
  }  
 }

int main(){
  return 0;
}
