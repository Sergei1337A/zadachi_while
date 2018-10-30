#include <iostream>
#include <cmath>


int number (int x1, int x2)
{
    return fabs(x2 - x1);
}

int main()
{
    int x1,x2;
    std::cout << "Enter value x1,x2: ";
    std::cin >> x1 >> x2;
    std::cout << number(x1,x2);
    return 0;
}

