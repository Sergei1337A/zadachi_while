#include <iostream>


int translation(int Tf)
{
    return (Tf - 32) * 5 / 9;

}

int main()
{
    int Tf, Tc;
    std::cout << "Enter temperature Tf: ";
    std::cin >> Tf;
    Tc = translation(Tf);
    std::cout << "Temperature in Celsius = " << Tc;
    return 0 ;

}
