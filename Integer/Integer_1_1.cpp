#include <iostream>

void calculation (int a)
{
   int b, c, d;
   b = a / 100;
   c = (a / 10) % 10;
   d = a % 10;
   std::cout << "sum = "<< b + c + d <<std::endl
             << "Proiz = "<< b * c * d;
}


int main()
{
    int a = 325;
    calculation(a);
    return 0 ;

}
