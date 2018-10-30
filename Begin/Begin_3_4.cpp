#include <iostream>

void Calculation(double Kg_shololad, double stoimost_shokolad, double Kg_irisok, double stoimost_irisok)
{
  double stoimost_1_Kg_Shoko, stoimost_1_Kg_iriski, doroje;
  stoimost_1_Kg_Shoko = stoimost_shokolad / Kg_shololad;
  stoimost_1_Kg_iriski = stoimost_irisok  / Kg_irisok;
  doroje =  stoimost_1_Kg_Shoko / stoimost_1_Kg_iriski;
  std::cout << "1 kg irisok stoit = "<< stoimost_1_Kg_iriski << "$" << std::endl
            << "1 kg shokolad stoit = "<< stoimost_1_Kg_Shoko<< "$" << std::endl
            << "Shokolad doroje irisok  v " << doroje;
}

int main()
{

    int Kg_shololad = 10, stoimost_shokolad , Kg_irisok = 10, stoimost_irisok;
    std::cout << "Enter stoimost Shokiladd and irisok: ";
    std::cin >> stoimost_shokolad >> stoimost_irisok;
    Calculation(Kg_shololad, stoimost_shokolad, Kg_irisok, stoimost_irisok);
    return 0 ;

}
