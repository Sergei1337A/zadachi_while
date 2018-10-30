#include <iostream>
#include <cmath>

double Gipatinuza (int a, int b)
{
    return sqrt(pow(a,2) + pow(b,2));
}

double Pirimtr (int a, int b, double c)
{
    return a + b + c;
}

int main()
{
    int a = 5, b = 20;
    std::cout << Gipatinuza(a,b) << std::endl;
    double c = Gipatinuza(a,b);
    std::cout << Pirimtr(a,b,c);
    return 0;
}

