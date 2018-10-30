#include <iostream>

int calculation (int Day)
{
 return (Day+6) % 7+1 ;
}


int main()
{
    int Day = 8;
    std::cout << calculation(Day);
    return 0 ;

}
