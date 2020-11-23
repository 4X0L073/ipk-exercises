#include <iostream>

int fibonacci (int number) {
    int erg;
    if (number == 0){
        return 0;
    }
    if (number == 1){
        return 1;
    }
    else {
        erg = fibonacci(number - 2) + fibonacci(number -1);
        std::cout << erg << " ";
    }
    return erg;
}




int main() {
    int a;
    int b;
    std::cout << "Gib eine Zahl für die Fibonacci-Folge ein: " << std::endl;
    std::cin >> a;
    b = fibonacci (a);
    std::cout << "Die Fiobonaccizahl dazu ist: " << b << std::endl;
    return 0;
}