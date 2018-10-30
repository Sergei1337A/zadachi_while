#include <iostream>
#include <cmath>

double Diamitr (int S)
{
    return sqrt(4 * S / M_PI);
}

double Long (double Diamitr)
{
    return M_PI * Diamitr;
}

int main()
{
    int S;
    std::cin >> S;
    std::cout << "Diamitr = "<<  Diamitr(S) << std::endl
              << "Plo111ad = " << Long(Diamitr(S));
    return 0;
}

