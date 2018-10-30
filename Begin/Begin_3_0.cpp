#include <iostream>
#include <cmath>
double conversion(double gradusi)
{
    return gradusi * 180 / M_PI;

}

int main()
{
    double radiani;
    std::cout << "Enter radiani : ";
    std::cin >> radiani;
    std::cout << "Gradusi = " << conversion(radiani);
    return 0 ;

}
