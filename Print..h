#ifndef PRINT__H_INCLUDED
#define PRINT__H_INCLUDED

void print_array(int*arr, int size)
{
    for(int i = 0; i< size; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

#endif // PRINT__H_INCLUDED
