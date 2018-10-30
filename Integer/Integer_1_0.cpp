#include <iostream>

void calculation (int a)
{
    std::cout << a % 10 <<std::endl
              << (a / 10) % 10;
}


int main()
{
    int a = 325;
    calculation(a);
    return 0 ;

}
