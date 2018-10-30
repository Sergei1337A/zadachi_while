#include <iostream>

int calculation (int n)
{
   return ((n / 60) % 60)* 60 ;
}


int main()
{
    int n = 50000;
    std::cout << calculation(n) << " second";
    return 0 ;

}
