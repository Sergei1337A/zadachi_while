#include <iostream>
#include <cmath>
double V (int a, int b, int c)
{
    return a * b * c;
}

double S (int a, int b, int c)
{
    return 2*(a * b + b * c + a * c);
}

int main()
{
    int dlina_rebra_a = 2;
    int dlina_rebra_b = 3;
    int dlina_rebra_c = 4;
    std::cout << V (dlina_rebra_a, dlina_rebra_b, dlina_rebra_c) << std::endl;
    std::cout << S (dlina_rebra_a, dlina_rebra_b, dlina_rebra_c) << std::endl;
    return 0;
}
