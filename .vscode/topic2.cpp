#include <iostream>  // std::cout
#include <algorithm> // std::min_element, std::max_element

// returns maximum in arr[] of size n
int largest(int arr[], int n)
{
    return *std::max_element(arr, arr + n);
}

int main()
{
    // setting array
    int arr[] = {25, 6, 84, 260, 3};
    // settin n to array length?
    int n = sizeof(arr) / sizeof(arr[0]);

    // print largest in array
    std::cout << largest(arr, n) << std::endl;
}