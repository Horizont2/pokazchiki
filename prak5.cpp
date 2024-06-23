#include <iostream>
using namespace std;

int sumArray(int *arr, int size) {
    int sum = 0;
    for (int *ptr = arr; ptr < arr + size; ++ptr) {
        sum += *ptr;
    }
    return sum;
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
    int sum = sumArray(arr, size);
    cout << "Сума елементів масиву: " << sum << endl;
    delete[] arr;
    return 0;
}
