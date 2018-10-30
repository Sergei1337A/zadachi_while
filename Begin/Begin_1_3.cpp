#include <iostream>
#include <cmath>

double S_1 (int R1)
{
    return M_PI * pow((R1),2);
}

double S_2 (int R2)
{
    return   M_PI * pow((R2),2);
}

double S_3 (double S1, double S2)
{
    return S1 - S2;
}


int main()
{
    std::cout << "Enter value R1 and R2 (R1 > R2) = ";
    double result_1, result_2, result_3;
    int R1, R2;
    std::cin >> R1 >> R2;;
    result_1 = S_1(R1);
    result_2 = S_2(R2);
    result_3 = S_3(result_1, result_2);
    std::cout << "S1 = " << result_1 << std::endl << "S2 = " << result_2 << std::endl<< "S3 = " <<  result_3 << std::endl;
    return 0;
}

