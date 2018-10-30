#include <iostream>
#include <cmath>

int Perimitr (int x2,int x1, int y2, int y1)
{
    int a,b;
    a = fabs(x2 - x1);
    b = fabs(y2 - x1);
    return (a + b) * 2;
}

int Plo111ad (int x2,int x1, int y2, int y1)
{
    int a,b;
    a = fabs(x2 - x1);
    b = fabs(y2 - x1);
    return a * b;
}


int main()
{
    int x1 = 3, x2 = 5, y1 = 3, y2 = 5;
    //std::cin >> x1 >> x2 >> y1 >> y2;
    std::cout << "Perinter = " << Perimitr(x2, x1, y2, y1) << std::endl;
    std::cout << "Plo111ad = "<< Plo111ad(x2, x1, y2, y1) << std::endl;
    return 0;
}



