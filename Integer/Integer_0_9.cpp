#include <iostream>

int calculation (int a)
{
    return a / 100;
}


int main()
{
    int a = 325;
    std::cout << calculation(a);
    return 0 ;

}
