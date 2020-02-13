#include <iostream>

using namespace std;

void insertion_sort(int a[], int size)
{
    int i, j, item;
    for (i = 1; i < size; i++)
    {
        item = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > item)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
    }
    a[j + 1] = item;
}

int main(int argc, char const *argv[])
{

    int a[] = {5, 4, 2, 5, 1};
    int size = sizeof(a) / sizeof(a[0]);
    insertion_sort(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
