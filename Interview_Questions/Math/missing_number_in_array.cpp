#include <iostream>

using namespace std;

int main()
{
    // get the number of elements in array
    int n;
    cin >> n;

    // temporary variable to store input values
    int temp;

    // variable to store elements of array
    int array[n];

    // scan all the elements
    for(int i = 0; i < n-1; ++i)
    {
        // scan the current element
        cin >> temp;
        // place it at index given by its value
        array[temp-1] = temp;
    }

    // loope through the array, and if an element is not equal to its index,
    // it is the missing number
    for(int i = 0; i < n; ++i)
    {
        if(array[i] != i+1)
        {
            cout << i+1 << "\n";
            break;
        }
    }

    return 0;
}

