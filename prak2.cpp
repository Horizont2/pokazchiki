#include <iostream>
using namespace std;

void determineSign(int *num, char *sign) {
    if (*num > 0) {
        *sign = '+';
    } else if (*num < 0) {
        *sign = '-';
    } else {
        *sign = '0';
    }
}

int main() {
    int num;
    char sign;
    cout << "Введіть число: ";
    cin >> num;
    determineSign(&num, &sign);
    cout << "Знак числа: " << sign << endl;
    return 0;
}
