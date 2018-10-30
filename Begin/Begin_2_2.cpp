#include <iostream>
#include <cmath>


int main()
{
    int A,B,C;
    std::cout << "Enter value A: ";
    std::cin >> A;
    std::cout << "Enter value B: ";
    std::cin >> B;
    C = A;
    A = B;
    std::cout << "A = " << A << std::endl;
    B = C;
    std::cout << "B = " << B;
    return 0 ;

}
