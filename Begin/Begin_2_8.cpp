#include <iostream>


void stepen(int A)
{
    int b;
    b = A * A;
    std::cout << "A2 = " << b << std::endl;
    A = b * A;
    std::cout << "A3 = " << A << std::endl;
    A = A * b;
    b = A;
    std::cout << "A5 = " << A << std::endl;
    A = A * A;
    std::cout << "A10 = " << A << std::endl;
    A = A * b;
    std::cout << "A15 = " << A << std::endl;
}

int main()
{
    int A;
    std::cout << "Enter value x: ";
    std::cin >> A;
    stepen(A);
    return 0 ;

}
