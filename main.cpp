#include <iostream>
#include "FuncA.h"


int main(){
double x;
int terms;
FuncA funcA;

    std::cout << "Введіть значення x (|x| < 1): ";
    std::cin >> x;
    if (std::abs(x) >= 1) {
        std::cout << "Значення x повинно бути в межах (-1, 1)!" << std::endl;
        return 1;
    }

    terms = 3;

    double result = funcA.Calculate(x, terms);

    std::cout << "Сума ряду: " << result << std::endl;

    return 0;
}
