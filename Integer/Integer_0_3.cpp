#include <iostream>


int calculation (int Byte)
{
  return Byte / 1024;
}

int main()
{
    int Byte = 354984;
    std::cout << calculation(Byte) << " Kilobyte";
    return 0 ;

}
