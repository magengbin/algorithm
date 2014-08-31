void shell_sort(int A[], int n)
{
    int tmp;
    for (int increment = n/2; increment > 0; increment /= 2)
    {
        for (int i = increment; i < n; i++)
        {
            tmp = A[i];
            int j = 0;
            for (j = i; j >= increment; j -= increment)
            {
                if (tmp < A[j - increment])
                {
                    A[j] = A[j - increment];
                }
                else
                {
                    break;
                }

            }
            A[j] = tmp; 
        }
    }
}
