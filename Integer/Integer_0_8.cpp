#include <iostream>

void calculation (int a)
{
    int b,c;
    b = a / 10;
    c = a % 10;
    std::cout << c << b;
}


int main()
{
    int a = 47;
    calculation(a);
    return 0 ;

}
