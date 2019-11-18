#include <iostream>

int fiboIter(int numberOfElements){
int next;
int x1 = 0;
int x2 = 1;
    if(numberOfElements <= 0){
        x1=-1;
        return x1;
        }else{
          for(int i = 0; i < numberOfElements; i++){
            if(i == numberOfElements-1){
            std::cout << x1 << std::endl;
            return x1;
          }else{
            std::cout << x1 << ",";
          }
            next=x1+x2;
            x1=x2;
            x2=next;
        }
    return x1;
    }
}
int main(){
   int n;
   std::cout << "Zahl: " << std::flush;
   std::cin >> n;
   fiboIter(n);
   return 0;
}
