#include <iostream>
#include <cmath>


int main()
{
    double x1, x2, x3, y1, y2, y3;
    std::cout<<"Enter value x1 ,x2 ,x3 ,y1 ,y2 , y3: ";
    std::cin>> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    double ax, ay, bx, by, cx, cy;
    ax = x1 - x2;
    ay = y1 - y2;
    bx = x2 - x3;
    by = y2 - y3;
    cx = x3 - x1;
    cy = y3 - y1;
    double  a, b, c;
    a = sqrt( ax * ax + ay * ay );
    b = sqrt( bx * bx + by * by );
    c = sqrt( cx * cx + cy * cy );
    double s,p;
    p = (a + b + c) / 2;
    s = sqrt( p *(p - a) * (p - b) * (p - c));
    std::cout<< "Plo111ad = " << s << std::endl << "Perimitr = "<< p <<std::endl;
    return 0 ;

}
