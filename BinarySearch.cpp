#include <iostream>

using namespace std;

int binary_search(int a[], int search, int size)
{

    int left, right, mid;
    left = 0;
    right = size - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == search)
        {
            return mid;
        }
        else if (search > a[mid])
        {
            left = mid + 1;
        }
        else if (search < a[mid])
        {
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 4, 6, 7, 10, 19, 22, 23};
    int size = 8;
    int search = 19;
    int result = binary_search(a, search, size);

    return 0;
}
