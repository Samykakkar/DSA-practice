#include <iostream>
using namespace std;

void rearrange(long long *arr, int n)
{
    int max = n - 1;
    int min = 0;

    int max_ele = arr[n - 1] + 1;

    for (int i = 0; i < n; i++)
    {
        //At even index, we have to put maximum elements in decreasing order.
        if (i % 2 == 0)
        {
            arr[i] += (arr[max] % max_ele) * max_ele;
            max--;
        }
        else
        {
            arr[i] = (arr[min] % max_ele) * max_ele;
            min++;
        }
    }
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_ele;
}

int main()
{
    long long arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Arrayn";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    rearrange(arr, n);

    cout << "\nModified Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}