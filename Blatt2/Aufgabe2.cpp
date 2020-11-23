#include <iostream>


void collatz(int x ) {
    while ( x != 1 && x != 0 && x !=-1 && x!= -5 && x != -17 ){
    if( x % 2 == 0){
      x = x / 2;
    }
    else {
        x = x * 3 +1;
    }
    }
    std::cout << "Das Ergbnis ist: " << x << std::endl;

}



int main(){
int a;
int b;
std::cout << "Gib einen beliebigen Startwert ein: " << std::endl;
std::cin >> a;
collatz (a);
return 0;
}

