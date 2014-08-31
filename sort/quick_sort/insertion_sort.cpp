void insertion_sort(int A[], int n)
{
    int tmp = 0;
    for (int i = 1; i < n; i++)
    {
        tmp = A[i];
        int j = 0;
        for ( j = i; j > 0 && A[j-1] > tmp; j--)
        {
            A[j] = A[j-1];
        }
        A[j] = tmp;
    }
}
