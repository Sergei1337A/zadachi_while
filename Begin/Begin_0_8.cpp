#include <iostream>
#include <cmath>

int L (int a, int b)
{
  return (a + b)/2;
}

int main()
{
    int a = 2, b = 6;

    std::cout << L (a, b) << std::endl;
    return 0;
}

