#include <iostream>

int calculation (int Day)
{
 return (Day+3) % 7 ;
}


int main()
{
    int Day = 9;
    std::cout << calculation(Day);
    return 0 ;

}
