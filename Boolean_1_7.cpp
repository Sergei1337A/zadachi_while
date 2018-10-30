#include <iostream>


bool A(int a)
{
  return (a % 2 != 0) && (a > 99 && a< 1000);
}


int main()
{
    int a;
    std::cout << "Enter value A : ";
    std::cin >> a;
    std::cout << A(a);
    return 0 ;
}
