// B
#include <iostream> // std::cout

int removeOdd(int arr[], int length)
{

    int whatDis = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (i != whatDis)
                arr[whatDis] = arr[i];
            ++whatDis;
        }
    }
    return whatDis;
}

int main()
{
    // setting array
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // getting array length
    int length = sizeof(array) / sizeof(array[0]);

    removeOdd(array, length);
}