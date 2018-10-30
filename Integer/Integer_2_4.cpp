#include <iostream>

int calculation (int Day)
{
 return Day % 7 ;
}


int main()
{
    int Day = 10;
    std::cout << calculation(Day);
    return 0 ;

}
