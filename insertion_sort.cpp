#include <iostream>

using namespace std;

void insertion_sort(int a[], int size)
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {12, 11, 13, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);
    insertion_sort(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
