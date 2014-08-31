#include "insertion_sort.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
int main(int argc, char **argv)
{
    
    int number = 100000;
    if (argc == 2)
    {
        int number = atoi(argv[1]);
    }
    
    int *A = new int[number];
    if (A == NULL)
    {
        std::cerr << "not full memory" << std::endl;
    }
    
    for (int i = 0; i < number; i++)
    {
        std::cin >> A[i];
    }
    clock_t start = clock();
    insertion_sort(A, number);
    clock_t finish = clock();
    std::cout << static_cast<double>(finish-start)/CLOCKS_PER_SEC << " s" << std::endl;
    for (int i = 0; i < number; i++)
    {
        std::cout << A[i] << std::endl;
    }
    return 0;
}
