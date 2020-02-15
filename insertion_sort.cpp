#include <iostream>

using namespace std;

void insertion_sort(int a[], int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++)
    {
        j = i - 1;
        while (j >= 0)
        {
            if (a[i] < a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
            j--;
        }
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
