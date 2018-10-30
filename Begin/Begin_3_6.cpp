#include <iostream>

double calculation (int V1, int V2, int S, int  T)
{
  return S + T * (V1 + V2);
}

int main()
{
    double V1 = 20, V2 = 30, S = 100, T;
    std::cout << "Enter time T : ";
    std::cin >> T;
    std::cout << "Distance = " << calculation(V1, V2, S, T);
    return 0 ;

}
