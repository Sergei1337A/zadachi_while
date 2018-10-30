#include <iostream>
#include <cmath>

double result (int x2,int x1, int y2, int y1)
{
    return sqrt(pow( (x2 - x1), 2) + pow( (y2 - y1), 2));

}


int main()
{
    int x1 = 1, x2 = 2, y1 = 3, y2 = 4;
    //std::cin >> x1 >> x2 >> y1 >> y2;
    std::cout << result(x2, x1, y2, y1) << std::endl;
    return 0;
}



