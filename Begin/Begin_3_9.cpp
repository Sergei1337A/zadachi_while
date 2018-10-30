#include <iostream>
#include <cmath>

void calculation (int a, int b, int c)
{
    double D, x1, x2;
    D = pow(b,2) - 4 * a * c;
    x1 = (-b+sqrt(D))/(2*a);
    x2 = (-b-sqrt(D))/(2*a);
    std::cout << "D = "<< D <<std::endl
              << "x2 = "<< x2 <<std::endl
              << "x1 = "<< x1 <<std::endl;
}

int main()
{
    double a = 3, b = -5, c = 2;
    calculation(a,b,c);
    return 0 ;

}
