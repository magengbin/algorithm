#include <iostream>
#include <exception>
#include <cstdlib>
#include <stdlib.h>
int nrand(int n)
{
    if (n <= 0 || n > RAND_MAX)
        std::cerr << "Argument to rand is out of rand" << std::endl;
    const int bucket_size = RAND_MAX/n;
    int r;
    do
    {
        r = rand()/bucket_size;
    }
    while (r >= n);

    return r;
}

int main(int argc, char** argv)
{
    int count = 100;
    if (argc == 2)
    {
        count = atoi(argv[1]);
    }
    for ( int i = 0; i < count; i++)
    {
        std::cout << nrand(1000000) << std::endl;
    }
    return 0;
}

