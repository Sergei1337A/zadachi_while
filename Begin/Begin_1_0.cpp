#include <iostream>
#include <cmath>

int kwadrat(int a, int b)
{
  return (sqrt(a)/sqrt(b));
}

int proiz(int a, int b)
{
  return a * b;
}

int sum(int a, int b)
{
  return a + b;
}

int razn(int a, int b)
{
  return a - b;
}

int main()
{
    int a = 10, b = 10;

    std::cout << "frequent square = "<<kwadrat(a, b) << std::endl << "difference = "
    << razn(a,b)<< std::endl << "amount = " << sum(a,b)<< std::endl << "multiplication = " << proiz(a,b);
    return 0;
}

