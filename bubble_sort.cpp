#include <iostream>

using namespace std;

void bubble_sort(int a[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {12, 14, 2, 42, 67, 4};
    int size = sizeof(a) / sizeof(a[0]);

    return 0;
}
