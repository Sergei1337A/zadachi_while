#include <iostream>
#include <cmath>

double formula(int x)
{
 return 3 * pow(x,6) - 6 * pow(x,2) - 7;
}


int main()
{
    int x;
    std::cout << "Enter value x: ";
    std::cin >> x;
    std::cout << " y = " << formula(x);
    return 0 ;

}
