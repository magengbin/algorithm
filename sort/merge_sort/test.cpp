#include "merge_sort.h"
#include <iostream>

int main()
{
    const int number = 100000;
    int *A = new int[number];
    for (int i = 0; i < number; i++)
    {
        std::cin >> A[i];
    }

    merge_sort(A, number);

    for (int i = 0; i < number; i++)
    {
        std::cout << A[i] << std::endl;
    }
    return 0;
}
