#include <iostream>

using namespace std;

int find_mid_index(int A[], int n)
{
    if (A == NULL)
    {
        return -1;
    }
    if (n == 1)
    {
        return 0;
    }
    int index = 0;
    int mid_value = A[index];
    int cur_max = mid_value;
    for (int i = 1; i < n; i++)
    {
        if (A[i] < mid_value)
        {
            index = -1;
        }
        else
        {
            if (index == -1 && A[i] > cur_max)
            {
                index = i;
                mid_value = A[index];
            }
        }
        if (A[i] > cur_max)
        {
            cur_max = A[i];
        }
    }
    return index;
}


int main(void)
{
    int A[] = {2,3,5,1,4,8,9};
    for (int i = 0; i < sizeof(A)/sizeof(int); i++)
    {
        cout << A[i] << ' ';
    }
    cout << endl;
    cout << find_mid_index(A, sizeof(A)/sizeof(int)) << endl;
}
