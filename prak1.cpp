#include <iostream>
using namespace std;

void findMax(int *a, int *b, int *max) {
    *max = (*a > *b) ? *a : *b;
}

int main() {
    int num1, num2, max;
    cout << "Введіть два числа: ";
    cin >> num1 >> num2;
    findMax(&num1, &num2, &max);
    cout << "Найбільше число: " << max << endl;
    return 0;
}
