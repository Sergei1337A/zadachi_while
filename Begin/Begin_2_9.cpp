#include <iostream>
#include <cmath>

double conversion(double gradusi)
{
    return  180 / gradusi * M_PI ;

}

int main()
{
    double gradusi;
    std::cout << "Enter gradusi : ";
    std::cin >> gradusi;
    std::cout << "Radiani = " << conversion(gradusi);
    return 0 ;

}
