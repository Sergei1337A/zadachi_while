#include <iostream>
#include <cmath>

double L (int a)
{
    return 2 * M_PI * a;
}

double S (int a)
{
    return M_PI * pow(a,2);
}

int main()
{
    int radius = 2;
    std::cout << L (radius) << std::endl;
    std::cout << S (radius) << std::endl;
    return 0;
}
