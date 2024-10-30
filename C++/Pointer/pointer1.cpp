#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Array of integers
    int* ptr; // Pointer variable

    int* ptr1 = &arr[1];

    ptr = arr; // Assign the address of the first element of arr to ptr

    cout << ptr <<endl;
    cout << ptr1;
    cout << ptr + 1;

    // Display array elements using pointer
    /*
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " = " << *(ptr + i) << endl;
    }
    */
    return 0;
}
