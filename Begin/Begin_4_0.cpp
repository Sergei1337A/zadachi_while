#include <iostream>


void calculation (int A1, int B1, int C1, int A2, int B2 ,int C2)
{
    double x, y, D;
    D = A1 * B2 - A2 * B2;
    x = (C1 * B2 - C2 * B1) / D;
    y = (A1 * C2 - A2 * C1) / D;
    std::cout << "D = "<< D <<std::endl
              << "x = "<< x <<std::endl
              << "y = "<< y <<std::endl;
}

int main()
{
    double A1 = 2, B1 = 1, C1 = 7, A2 = 1, B2 = -2, C2 = 1;
    calculation(A1, B1, C1, A2, B2, C2);
    return 0 ;

}
