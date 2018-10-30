#include <iostream>
#include <cmath>
using TernaryOperatoin = int(*) (int, int, int);


void fill_array (int* arr, int size, TernaryOperatoin p, int a, int b)
{
    for(int i = 0; i < size; ++i)
    {
        arr[i]= p{a,d,i};
    }
  return ;
}



int main()
{
   int arr[5];
   fill_array(arr, 0, 5, f1, 1, 2);
   print_array(arr, 5)
   return 0
}
