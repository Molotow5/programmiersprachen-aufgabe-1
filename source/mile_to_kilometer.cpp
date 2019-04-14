#include <iostream>

double mile_to_kilometer(double miles){
    double kilometer = miles * 1.60934;
    return kilometer;
}

int main(){
    double miles;
    std::cout << "_Meilen zu Kilometer Umrechnungsmodul gestartet_" << "\n";
    std::cout << "Warten auf Meileneingabe: ";
    std::cin >> miles;
    double kilometer = mile_to_kilometer(miles);
    std::cout << "In Kilometer: " << kilometer << "\n";
}