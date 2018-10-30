#include <iostream>


bool B_mid(int a, int b, int c)
{
  return ((a < b) && (b < c)) || ((c < b) && (b < a));
}


int main()
{
    int a, b, c;
    std::cout << "Enter value A and B and C: ";
    std::cin >> a >> b >> c;
    std::cout << B_mid(a, b, c);
    return 0 ;
}
