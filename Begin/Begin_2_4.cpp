#include <iostream>
#include <cmath>

void Izmenenie(int a, int b, int c)
{
    int index_c, index_b;
    index_c = c;
    index_b = b;
    c = a;
    b = index_c;
    a = index_b;
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
