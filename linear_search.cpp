#include <iostream>

using namespace std;

int linear_search(int a[], int arraySize, int searchElement)
{
    int i;
    for (i = 0; i < arraySize; i++)
    {
        if (a[i] == searchElement)
        {
            return i;
        }
    }
    i = -1;
    return i;
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 12, 14, 15, 32, 56, 65, 34, 87, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    int search;
    cout << "Search: ";
    cin >> search;
    int searchResult = (arr, size, search);
    if (searchResult != -1)
    {
        cout << "Your search element found at position: " << searchResult << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }

    return 0;
}
