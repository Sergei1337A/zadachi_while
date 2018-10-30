#include <iostream>

double Valuation(double Kg_k, double stoimost)
{
    return stoimost / Kg_k ;

}

int main()
{
    int Kg_k, stoimost;
    std::cout << "Enter Kg konfet and stoimost : ";
    std::cin  >> Kg_k >> stoimost;
    std::cout << "1 kg stoit = " << Valuation(Kg_k,stoimost);
    return 0 ;

}
