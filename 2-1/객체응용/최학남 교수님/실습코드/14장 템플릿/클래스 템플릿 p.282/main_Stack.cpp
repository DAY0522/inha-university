#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

    Stack<double> doubleStack(5);
    double doubleValue = 1.1;
    
    cout << "Pushing elements onto doubleStack" << endl;
    
    while (doubleStack.push(doubleValue)) {
        cout << doubleValue << ' ';
        doubleValue += 1.1;
    }
    
    cout << "\nStack is full. Cannot push " << doubleValue << endl
        << "\nPopping elements from doubleStack" << endl;
    while (doubleStack.pop(doubleValue)) {
        cout << doubleValue << ' ';
    }
    cout << "\nStack is empty. Cannot pop" << endl
        << endl;

    Stack<int> intStack;
    int intValue = 1;
    
    cout << "Pushing elements onto intStack" << endl;
    
    while (intStack.push(intValue)) {
        cout << intValue << ' ';
        intValue += 1;
    }
    
    cout << endl
        << "Stack is full. Cannot push " << intValue << endl
        << "\nPopping elements from intStack" << endl;
    
    while (intStack.pop(intValue)) {
        cout << intValue << ' ';
    }

    cout << "\nStack is empty. Cannot pop" << endl;
    return 0;
}