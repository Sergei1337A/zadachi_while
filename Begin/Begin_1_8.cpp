#include <iostream>
#include <cmath>

void number (int A, int C, int B)
{
    int result_2, result_1, proizvidenie;
    result_1 = fabs(A - C)+1;
    result_2 = fabs(B - C)+1;
    proizvidenie = result_1 * result_2;
    std::cout << "AC = " << result_1 <<std::endl << "BC = "
              << result_2 <<std::endl << "AC * BC = " << proizvidenie;
}

int main()
{
    int A, C, B;
    std::cout << "Enter value A, C, B (* C *) : ";
    std::cin >> A >> C >> B;
    number(A,C,B);
    return 0;
}
