#include "insertion_sort.h"
#define cutoff (3)
inline void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int median3(int A[], int left, int right)
{
    int center = (left + right) / 2;
    if (A[left] > A[center])
    {
        swap(A[left], A[center]);
    }
    if (A[left] > A[right])
    {
        swap(A[left], A[right]);
    }
    if (A[center] > A[right])
    {
        swap(A[center], A[right]);
    }

    swap(A[center], A[right-1]);
    return A[right-1];
}


void qsort(int A[], int left, int right)
{
    if (left + cutoff <= right)
    {
        int pivot = median3(A, left, right);
        int i = left;
        int j = right - 1;

        for ( ; ; )
        {
            while (A[++i] < pivot){}
            while (A[--j] > pivot){}
            if (i < j)
            {
                swap(A[i], A[j]);
            }
            else
            {
                break;
            }
        }
        swap(A[i],A[right - 1]);
        qsort(A, left, i - 1);
        qsort(A, i + 1, right); 
    }
    else
    {
        insertion_sort(A + left, right - left +1);
    }
}
void quick_sort(int A[], int n)
{
    qsort(A, 0, n - 1);
}
