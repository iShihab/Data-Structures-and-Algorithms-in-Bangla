#include <iostream>

using namespace std;

void selection_sort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; i < size; i++)
        {
            if (a[j] < a[i])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {5, 8, 10, 45, 32, 44};
    int size = 6;

    return 0;
}
