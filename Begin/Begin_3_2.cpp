#include <iostream>

int translation(int Tc)
{
    return 9 * Tc / 5 + 32;

}

int main()
{
    int Tc;
    std::cout << "Enter temperature Tc: ";
    std::cin >> Tc;
    std::cout << "Temperature in fahrenheit's = " << translation(Tc);
    return 0 ;

}
