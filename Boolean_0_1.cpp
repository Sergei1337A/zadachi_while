#include <iostream>


bool check (int a)
{
  return (a > 0);
}


int main()
{
    int a;
    std::cout << "Enter value A: ";
    std::cin >> a;
    std::cout << check(a);
    return 0 ;

}
