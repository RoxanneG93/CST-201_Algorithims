#include <iostream>

using namespace std;

int main()
{

    int *int_ptr{nullptr};

    // allocating storage for int on the heap, address stored in the pointer
    int_ptr = new int;

    // display the memeory location of the int on the heap
    cout << int_ptr << endl;

    // frees up the storage
    delete int_ptr;

    size_t size{100};
    double *temp_ptr{nullptr};

    // cout << "How many temps?";

    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    return 0;
}