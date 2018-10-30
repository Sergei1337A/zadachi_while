#include <iostream>


int calculation (int a, int b)
{
  return a % b;
}

int main()
{
    int a = 10, b = 3;
    std::cout << calculation(a, b) << " ne zaniti otrezka";
    return 0 ;

}
