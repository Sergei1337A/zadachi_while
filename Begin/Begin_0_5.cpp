#include <iostream>
#include <cmath>
int V (int a)
{
    return pow(a,3);
}

int S (int a)
{
    return (6 * pow(a,3));
}

int main()
{�� ����� ���� � ���� ����������� ��� �� �� �����
    int dlina_rebra = 2;
    std::cout << V(dlina_rebra) << std::endl;
    std::cout << S(dlina_rebra) << std::endl;
    return 0;
}
