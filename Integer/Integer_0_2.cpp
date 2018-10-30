#include <iostream>


int calculation (int m)
{
  return m / 1000;
}

int main()
{
    int m = 35400;
    std::cout << calculation(m) << " tonn";
    return 0 ;

}
