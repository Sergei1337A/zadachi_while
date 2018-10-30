#include <iostream>
#include <cmath>

double formula(int x)
{
 return 4 * pow((x - 3), 6) - 7 * pow((x-3),3) + 2;
}


int main()
{
    int x;
    std::cout << "Enter value x: ";
    std::cin >> x;
    std::cout << " y = " << formula(x);
    return 0 ;

}
