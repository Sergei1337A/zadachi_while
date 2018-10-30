#include <iostream>

int calculation (int a)
{
   return (a / 1000) % 10;
}


int main()
{
    int a = 376243;
    std::cout << calculation(a);
    return 0 ;

}
