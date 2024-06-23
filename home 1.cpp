#include <iostream>
using namespace std;

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; ++i) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    int *src = new int[size];
    int *dest = new int[size];

    cout << "Введіть елементи вихідного масиву: ";
    for (int i = 0; i < size; ++i) {
        cin >> src[i];
    }

    copyArray(src, dest, size);

    cout << "Елементи скопійованого масиву: ";
    for (int i = 0; i < size; ++i) {
        cout << dest[i] << " ";
    }
    cout << endl;

    delete[] src;
    delete[] dest;

    return 0;
}
