#include <iostream>

int calculation (int Day)
{
 return Day % 7+1 ;
}


int main()
{
    int Day = 3;
    std::cout << calculation(Day);
    return 0 ;

}
