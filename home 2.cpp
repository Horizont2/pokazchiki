#include <iostream>
using namespace std;

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}

int main() {
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    cout << "Елементи масиву у зворотному порядку: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
