#include <iostream>
#include <cmath>

void calculation (int A, int B,int C)
{
    int Max, P_ne_zanitoi, P_zanitoi;
    Max = (A / C) * (B / C);
    std::cout << "Number of squares = " << Max << std::endl;
    P_zanitoi = Max * sqrt(C);
    P_ne_zanitoi = A * B - P_zanitoi;
    std::cout << "P = " << P_ne_zanitoi;
}


int main()
{
    int A = 12, B = 6, C = 3 ;
    calculation(A,B,C);
    return 0 ;

}
