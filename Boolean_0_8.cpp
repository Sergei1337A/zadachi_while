#include <iostream>




bool A_and_B (int a, int b)
{
  return a % 2 != 0 && b % 2 !=0 ;
}


int main()
{
    int a, b;
    std::cout << "Enter value A and B : ";
    std::cin >> a >> b;
    std::cout << A_and_B(a,b);
    return 0 ;
}
