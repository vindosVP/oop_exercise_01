#include <iostream>

#include "modulo.hpp"

int main() {
    Modulo a;
    Modulo b;
    Modulo c;

    a.Read(std::cin);
    b.Read(std::cin);

    std::cout << "Addition:" << std::endl;
    a.Add(b).Print(std::cout);

    std::cout << "Subtraction:" << std::endl;
    a.Subtract(b).Print(std::cout);

    std::cout << "Multiplication:" << std::endl;
    a.Multiply(b).Print(std::cout);

    if(a.IsEqual(b)) {
        std::cout << "Numbers are equal" << std::endl;
    }

    if(a.IsGreater(b)) {
        std::cout << "First number is greater" << std::endl;
    }
    
    if(a.IsLess(b)) {
        std::cout << "First number is less" << std::endl;
    }


    std::cout << "Division:" << std::endl;
    if(a.Divide(b).GetMod()) {
        a.Divide(b).Print(std::cout);        
    }


    return 0;
}
