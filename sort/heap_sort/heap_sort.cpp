inline int left_child(int i)
{
    return 2 * i + 1;
}

int per_down(int A[], int i, int n)
{
    int child = 0;
    int tmp = 0;
    for (tmp = A[i]; left_child(i) < n; i = child)
    {
        child = left_child(i);
        if (child != n - 1 && A[child + 1] > A[child])
        {
            child++;
        }
        if (tmp < A[child])
        {
            A[i] = A[child];
        }
        else
        {
            break;
        }

    }
    A[i] = tmp;
}
inline void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void heap_sort(int A[], int n)
{
    for (int i = n/2; i >= 0; i--)
    {
        per_down(A, i, n);
    }
    for (int i = n-1; i > 0; i--)
    {
        swap(A[0], A[i]);
        per_down(A, 0, i);
    }
}
