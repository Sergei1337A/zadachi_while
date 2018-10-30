#include <iostream>
#include <cmath>

double calculation (double a, double b)
{
  return (-(b/a)) ;
}

int main()
{
    double a, b;
    std::cout << "Enter value A,B (A no = 0)and (A*x + B = 0) : ";
    std::cin >> a >> b;
    std::cout << " x = " << calculation(a,b);
    return 0 ;

}
