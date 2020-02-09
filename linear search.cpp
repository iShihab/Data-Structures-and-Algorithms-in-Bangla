#include <iostream>

using namespace std;

int linear_search(int a[], int arraySize, int searchElement)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (a[i] == searchElement)
        {
            return i;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 12, 14, 15, 32, 56, 65, 34, 87, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search;
    cout << "Search: " << endl;

    return 0;
}
