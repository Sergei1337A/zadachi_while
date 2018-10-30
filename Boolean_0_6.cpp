#include <iostream>


bool check (int a, int b, int c)
{
  return (a < b) && (b < c);
}


int main()
{
    int a, b, c;
    std::cout << "Enter value A and B and C: ";
    std::cin >> a >> b >> c;
    std::cout << check(a, b, c);
    return 0 ;

}
