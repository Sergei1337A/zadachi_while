#include <iostream>
#include <cmath>

int calculation (int years)
{
  return (years - 1) / 100 + 1;
}


int main()
{
    int years;
    std::cout <<"Enter years :";
    std::cin >> years;
    calculation(years);
    return 0 ;

}
