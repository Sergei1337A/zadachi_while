#include <iostream>

double calculation (double V, double U, double T1, double T2)
{
  return V * T1 + (V - U) * T2;
}

int main()
{
    double V = 20, U = 30, T1 = 2, T2 = 3;
   // std::cout << "Enter standing_V and current water U : ";
    //std::cin >> V >> U;
    std::cout << "common way = " << calculation(V, U, T1, T2);
    return 0 ;

}
