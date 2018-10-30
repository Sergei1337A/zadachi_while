#include <iostream>


int calculation (int a, int b)
{
  return a / b;
}

int main()
{
    int a = 10, b = 4;
    std::cout << calculation(a, b) << " otrezka";
    return 0 ;

}
