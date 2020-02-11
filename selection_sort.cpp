#include <iostream>

using namespace std;

void selection_sort(int a[], int size)
{
    int i, j, index_min, temp;
    for (i = 0; i < size - 1; i++)
    {
        index_min = i;
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                index_min = j;
            }
        }
        if (index_min != i)
        {
            temp = a[i];
            a[i] = a[index_min];
            a[index_min] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {8, 2, 14, 18, 14, 65};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
