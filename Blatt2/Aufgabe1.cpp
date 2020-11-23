#include <iostream>
#include <cmath>

double ergebniss (double a,double  b ,double c){
    double e1;
    double D1;
    D1 = sqrt(b * b - (4 * a * c));
     e1 = (-b + D1 )/(2 * a);
   return e1;
  
   
   
}
double ergebniss2 (double a, double b, double c){
    double e2;
    double D2;
    D2 = sqrt(b * b - (4 * a * c));
     e2 = (-b - D2 )/(2 * a);
    return e2; 
}
    


int main() {
    double a;
    double b;
    double c;
    std::cout << "Gib die Zahlen für a,b und c ein" << std::endl;
    std::cout << "a = " ;
    std::cin >> a;
       std::cout << "b = ";
    std::cin >> b;
       std::cout << "c = ";
    std::cin >> c;
    double e1 = ergebniss (a, b, c);
    double e2 = ergebniss2 (a, b, c);
    double W = b * b - 4 * a * c; 

    if( W < 0 )
    {
    std::cout << "Die Determinante ist negativ!" << std::endl;
    }

    if (W == 0){
        std::cout << "Es gibt nur eine Nullstelle bei x1/2: " << e1 << std::endl;

    }

    if (W > 0) {
    std::cout << "Die Nullstellen sind: x1 = " << e1 << " und x2 = " << e2 << std::endl;
     }
    return 0;

}