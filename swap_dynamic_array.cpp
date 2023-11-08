#include <iostream>
using namespace std;

void swapElements(int arr[], int index1, int index2) {

int temp = arr[index1];

arr[index1] = arr[index2];

arr[index2] = temp;

}

int main() {

const int size = 5;

int array[size] = {1, 2, 3, 4, 5};

cout << "Original Array: ";

for (int i = 0; i < size; ++i) {

cout << array[i] << " ";

}

cout << std::endl;

// Swap elements at index 1 and 3

swapElements(array, 1, 3);

cout << "Array after swapping elements at index 1 and 3: ";

for (int i = 0; i < size; ++i) {

cout << array[i] << " ";

}
cout << std::endl;

return 0;

}
