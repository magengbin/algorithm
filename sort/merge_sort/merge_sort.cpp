#include <iostream>
void merge(int A[], int tmpArr[], int lpos, int center, int rpos)
{
    int lend = center - 1;
    int tmppos = lpos;
    int elem_num = rpos - lpos + 1;
    while (lpos <= lend && center <= rpos)
    {
        if (A[lpos] <= A[center])
        {
            tmpArr[tmppos++] = A[lpos++];
        }
        else
        {
            tmpArr[tmppos++] = A[center++];
        }
    }

    while (lpos <= lend)
    {
        tmpArr[tmppos++] = A[lpos++];
    }

    while (center <= rpos)
    {
        tmpArr[tmppos++] = A[center++];
    }
    
    for (int i = 0; i < elem_num; i++, rpos--)
    {
        A[rpos] = tmpArr[rpos];
    }
}


void m_sort(int A[], int tmpArr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right)/2;
        m_sort(A, tmpArr, left, mid);
        m_sort(A, tmpArr, mid + 1, right);
        merge(A, tmpArr, left, mid + 1, right);
    }
}


void merge_sort(int A[], int n)
{
    int *tmpArr = new int[n];
    if (tmpArr != NULL)
    {
        m_sort(A, tmpArr, 0, n-1);
    }
    else
    {
        std::cerr << "not full memory!" << std::endl; 
    }
}
