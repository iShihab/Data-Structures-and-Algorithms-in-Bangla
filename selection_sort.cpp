#include <iostream>

using namespace std;

void selection_sort(int a[], int size)
{
    int i, j, min_index;
    int temp;
    for (i = 0; i < size - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < size; i++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {

            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {5, 8, 10, 45, 32, 44};
    int size = 6;
    selection_sort(a, size);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}
