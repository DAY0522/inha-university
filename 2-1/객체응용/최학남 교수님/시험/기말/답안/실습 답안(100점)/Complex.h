#pragma once

template <typename T>
class Complex
{
public:
	Complex(T = 0.0, T = 0.0);
	Complex add(const Complex&)const;
	Complex subtract(const Complex&);
	void printComplex();
	void setComplexNumber(T, T);
	Complex operator-(const Complex&);
private:
	T realPart;
	T imaginaryPart;
};

template <typename T>
Complex<T>::Complex(T real, T imaginary)
	: realPart(real), imaginaryPart(imaginary) {}

template <typename T>
Complex<T> Complex<T>::add(const Complex& comp) const
{
	Complex<T> temp(realPart + comp.realPart, imaginaryPart+comp.imaginaryPart);
	return  temp;
}

template <typename T>
Complex<T> Complex<T>::subtract(const Complex& comp)
{
	Complex<T> temp(realPart - comp.realPart, imaginaryPart - comp.imaginaryPart);
	return  temp;
}

template <typename T>
void Complex<T>::printComplex()
{
	cout << "(" << realPart;
	if (imaginaryPart >= 0)
	{
		cout << "+";
	}
		cout<< imaginaryPart << "i)";
}

template <typename T>
void Complex<T>::setComplexNumber(T r, T i)
{
	realPart = r;
	imaginaryPart = i;
}

template <typename T>
Complex<T> operator+(const Complex<T>& comp1, const Complex<T>& comp2)
{
	return comp1.add(comp2);
}

template <typename T>
Complex<T> Complex<T>::operator-(const Complex& comp)
{
	return this->subtract(comp);
}