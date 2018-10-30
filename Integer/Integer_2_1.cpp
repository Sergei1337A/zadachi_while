#include <iostream>

int calculation (int n)
{
   return n % 60 ;
}


int main()
{
    int n = 45332;
    std::cout << calculation(n) << " second ";
    return 0 ;

}
