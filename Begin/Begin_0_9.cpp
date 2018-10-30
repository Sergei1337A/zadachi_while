#include <iostream>
#include <cmath>

int L (int a, int b)
{
  return sqrt(a * b);
}

int main()
{
    int a = 3, b = 3;

    std::cout << L (a, b) << std::endl;
    return 0;
}

