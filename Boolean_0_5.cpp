#include <iostream>


bool check (int a, int b)
{
  return a >= 0 && b < -2;
}


int main()
{
    int a, b;
    std::cout << "Enter value A and B: ";
    std::cin >> a >> b;
    std::cout << check(a,b);
    return 0 ;

}
