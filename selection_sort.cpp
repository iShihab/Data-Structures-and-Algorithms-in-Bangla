#include <iostream>

using namespace std;

void selection_sort(int a[], int size)
{
    int i, j, min_index;
    for (i = 0; i < size - 1; i++)
    {
        min_index = i;
        for (j = i + 1; i < size; i++)
        {
            if (a[j] < a[i])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {5, 8, 10, 45, 32, 44};
    int size = 6;

    return 0;
}
