#include <iostream>

int calculation (int n)
{
   return (n / 60) / 60 ;
}


int main()
{
    int n = 45332;
    std::cout << calculation(n) << " hour's ";
    return 0 ;

}
