#include <iostream>
#include <cmath>


int fiboRekursiv(int n){
  if(n<=0){
    return -1;
  }
  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }else{
      return fiboRekursiv(n-1) + fiboRekursiv(n-2);
  }
}
int main(){
  int eingabe;
   std::cout << "Zahl: " << std::flush;
   std::cin >> eingabe;
   fiboRekursiv(eingabe);
   return 0;
}
