#include <iostream>




bool A_and_B_C (int a, int b, int c)
{
  return (a > 0&& b > 0 && c > 0);
}


int main()
{
    int a, b, c;
    std::cout << "Enter value A , B and C : ";
    std::cin >> a >> b >> c;
    std::cout << A_and_B_C(a, b, c);
    return 0 ;
}
