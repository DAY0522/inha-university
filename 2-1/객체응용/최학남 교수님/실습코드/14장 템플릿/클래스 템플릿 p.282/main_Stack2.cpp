#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

template<typename T>

void testStack(Stack<T>& theStack, T value, T increment, const string& stackName) {
    cout << "Pushing elements onto " << stackName << endl;
    
    while (theStack.push(value)) {
        cout << value << ' ';
        value += increment;
    }

    cout << "\nStack is full. Cannot push " << value << endl
        << endl
        << "Poping elements from " << stackName << endl;
    
    while (theStack.pop(value)) {
        cout << value << ' ';
    }
    
    cout<< "\nStack is empty. Cannot pop" << endl
        << endl;
}

int main() {
    Stack<double> doubleStack(5);
    Stack<int> intStack;

    testStack(doubleStack, 1.1, 1.1, "doubleStack");
    testStack(intStack, 1, 1, "intStack");
    
    return 0;
}