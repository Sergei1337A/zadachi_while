#include <iostream>

int calculation (int n)
{
   return n / 60 ;
}


int main()
{
    int n = 10000;
    std::cout << calculation(n) << " minutes' ";
    return 0 ;

}
