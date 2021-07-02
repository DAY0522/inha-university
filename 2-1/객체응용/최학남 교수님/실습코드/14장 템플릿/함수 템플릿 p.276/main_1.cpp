#include <iostream>
using namespace std;

template<typename T>

void printArray(const T* array, int count) {
    for (int i = 0; i < count; i += 1) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {
    const int ACOUNT = 5;
    const int BCOUNT = 7;
    const int CCOUNT = 6;

    int a[ACOUNT] = { 1, 2, 3, 4, 5 };
    double b[BCOUNT] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
    char c[CCOUNT] = "HELLO";

    cout << "Array a contains:" << endl;
    printArray(a, ACOUNT);

    cout << "Array b contains:" << endl;
    printArray(b, BCOUNT);

    cout << "Array c contains:" << endl;
    printArray(c, CCOUNT);
    return 0;
}