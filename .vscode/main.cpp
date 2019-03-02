#include <iostream>

// method to compare if a is greater than b, if it is then return a, else return b.
int m(int a, int b)
{
    return ((a > b) ? (a) : (b));
}
int main()
{
    int max;
    int arr[] = {1, 2, 3};
    max = m(m(arr[0], arr[1]), m(arr[2], arr[3]));
    std::cout << max << std::endl;
    return (0);
}