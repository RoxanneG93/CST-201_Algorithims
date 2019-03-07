// Exercise 1.11.4

/** Using only pointers (no array indexing), write: 
        a. A function to add all numbers in an integer array. 
        b. A function to remove all odd numbers from an ordered array. 
    The array should remain ordered. Would it be easier to write this function if the array were unordered?
**/

// A
// #include <iostream> // std::cout

// // sets pointer for the array
// int addAll(int *arr, int arrLength)
// {
//     int i, sum = 0;

//     for (i = 0; i < arrLength; i++)
//     {
//         // setting sum to the next array index.
//         sum = sum + arr[i];
//     }
//     std::cout << "sum of array is = " << sum;
//     return sum;
// }

// int main()
// {
//     // setting array
//     int arr[] = {8, 16, 45, 29, 11};

//     // getting array length
//     int arrLength = sizeof(arr) / sizeof(arr[0]);

//     addAll(arr, arrLength);
// }

// ====================================

// Second example without using array index

#include <iostream> // std::cout

// sets pointer for the array
int addAll(int *arr, int arrLength)
{
    int i, sum = 0;

    for (i = 0; i < arrLength; i++)
    {
        std::cout << *(arr + 1);
        // setting sum to the next array index.
        sum = sum + *(arr + 1);
    }
    std::cout << "sum of array is = " << sum;
    return sum;
}

int main()
{
    // setting array
    int arr[] = {8, 16, 45, 29, 11};

    // getting array length
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    addAll(arr, arrLength);
}