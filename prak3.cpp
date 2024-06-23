#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    cout << "Введіть два числа: ";
    cin >> num1 >> num2;
    cout << "До обміну: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(&num1, &num2);
    cout << "Після обміну: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
