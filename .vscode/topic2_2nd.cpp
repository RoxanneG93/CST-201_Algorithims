#include <bits/stdc++.h>

int largest(int arr[], int n)
{

    // set max to first array index
    int max = arr[0];

    // Start looping through array from second index and
    // compare every element with current max
    // if greater set max to current array element
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

// Driver Code
int main()
{
    // going to pretend its an array of 100...
    int arr[] = {25, 84, 157, 2, 500, 15, 873, 10, 244, 380};
    // setting n to the length of array
    int n = sizeof(arr) / sizeof(arr[0]);

    // print largest element in array
    std::cout << largest(arr, n) << std::endl;
}
