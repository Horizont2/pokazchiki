#include <iostream>
using namespace std;

void calculate(double *a, double *b, char *op, double *result) {
    switch (*op) {
        case '+': *result = *a + *b; break;
        case '-': *result = *a - *b; break;
        case '*': *result = *a * *b; break;
        case '/': *result = (*b != 0) ? *a / *b : 0; break;
        default: cout << "Неправильна операція" << endl; return;
    }
}

int main() {
    double num1, num2, result;
    char op;
    cout << "Введіть два числа і операцію (+, -, *, /): ";
    cin >> num1 >> num2 >> op;
    calculate(&num1, &num2, &op, &result);
    cout << "Результат: " << result << endl;
    return 0;
}
