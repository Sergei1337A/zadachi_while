#include <iostream>

int calculation (int a)
{
   return (a / 100) % 10;
}


int main()
{
    int a = 1243;
    std::cout << calculation(a);
    return 0 ;

}
