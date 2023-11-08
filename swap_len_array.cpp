#include <iostream>
using namespace std;

class ArrayWrapper {
private:
    int* arr;
    int length;

public:
    ArrayWrapper(int* array, int len) : arr(array), length(len) {}

    friend void swapLength(ArrayWrapper &aw1, ArrayWrapper &aw2) {
        int temp = aw1.length;
        aw1.length = aw2.length;
        aw2.length = temp;
    }

    void printArray() {
        for (int i = 0; i < length; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {6, 7, 8};

    ArrayWrapper a(arr1, 5);
    ArrayWrapper b(arr2, 3);

    cout << "Before swapping length:" << endl;
    cout << "Array 1: ";
    a.printArray();
    cout << "Array 2: ";
    b.printArray();

    swapLength(a, b);

    cout << "After swapping length:" << endl;
    cout << "Array 1: ";
    a.printArray();
    cout << "Array 2: ";
    b.printArray();

    return 0;
}
