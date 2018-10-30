#include <iostream>
#include <cmath>

void Izmenenie(int a, int b, int c)
{
    int index_c, index_b;
    index_c = c;
    index_b = b;
    b = a;
    c = index_b;
    a = index_c;
    std::cout << "A = " <<  a << std::endl << "B = " << b
              << std::endl << "C = " << c;
}


int main()
{
    int A,B,C;
    std::cout << "Enter value A: ";
    std::cin >> A;
    std::cout << "Enter value B: ";
    std::cin >> B;
    std::cout << "Enter value C: ";
    std::cin >> C;
    Izmenenie(A,B,C);
    return 0 ;

}
