#include <iostream>

int calculation (int Day)
{
 return (Day + 4) % 7 + 1 ;
}


int main()
{
    int Day = 6;
    std::cout << calculation(Day);
    return 0 ;

}
