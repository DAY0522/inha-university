#include <iostream>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H

template <typename T>
class Complex
{
public:
    Complex(T real = 0, T imaginary = 0);
    Complex add(const Complex& complex) const;
    void print() const;
    Complex subtract(const Complex& complex) const;
    Complex operator-(const Complex& complex) const;

private:
    T real;
    T imaginary;
};

#endif

template <typename T>
Complex<T>::Complex(T real, T imaginary)
    :real(real), imaginary(imaginary) {};

template <typename T>
Complex<T> Complex<T>::add(const Complex& complex) const
{
    return Complex(real + complex.real, imaginary + complex.imaginary);
}

template <typename T>
void Complex<T>::print() const
{
    cout << "real : " << real << endl;
    cout << "imaginary : " << imaginary << "\n\n";
}

template <typename T>
Complex<T> Complex<T>::subtract(const Complex& complex) const
{
    return Complex(real - complex.real, imaginary - complex.imaginary);
}

template <typename T>
Complex<T> Complex<T>::operator-(const Complex& complex) const
{
    return subtract(complex);
}

template <typename T>
Complex<T> operator+(const Complex<T>& com, const Complex<T>& right)
{
    return com.add(right);
}