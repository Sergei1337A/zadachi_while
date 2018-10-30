#include <iostream>
#include <cmath>

double Radius (int L)
{
    return L / (2 * M_PI);
}

double Plo111ad (double result_1)
{
    return M_PI * pow((result_1),2);
}

int main()
{
    int L;
    std::cin >> L;
    std::cout << "Radius = "<< Radius(L) << std::endl << "Plo111ad = " << Plo111ad(Radius(L));
    return 0;
}

