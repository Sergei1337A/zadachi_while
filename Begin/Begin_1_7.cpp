#include <iostream>
#include <cmath>

void number (int A, int B, int C)
{
  int result_2, result_1, sum;
  result_1 = fabs(A - C)+1;
  result_2 = fabs(B - C)+1;
  sum = result_1 + result_2;
 std::cout << "AC = " << result_1 <<std::endl << "BC = "
 << result_2 <<std::endl << "AC + BC = " << sum;
}

int main()
{
    int A, B, C;
    std::cout << "Enter value A, B, C: ";
    std::cin >> A >> B >> C;
    number(A,B,C);
    return 0;
}

