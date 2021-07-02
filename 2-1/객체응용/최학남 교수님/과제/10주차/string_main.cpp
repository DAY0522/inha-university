#include<iostream>
#include<string>
using namespace std;

const string operator+(const string& left, const string& right) // string class를 연산자 오버로딩, string&로 두 개의 parameter를 입력받음
{
	return left + ' ' + right; // 왼쪽 parameter에 입력된 str객체와 오른쪽 parameter에 입력된 str객체를 결합하여 반환 
}

int main()
{
	string str1 = "happy"; // str1 객체 선언 및 초기화
	string str2 = "birth day"; // str2 객체 선언 및 초기화
	string str3 = str1 + str2; // str3 객체 선언 및 초기화, 위에서 정의한 연산자 오버로드 함수를 이용해 각각의 str 객체를 +로 연결시킬 수 있음

	cout << "str1 : " << str1 << endl
		<< "str2 : " << str2 << endl
		<< "str3 : " << str3 << endl << endl;

	string str4("happy"); // str4 객체 선언 및 초기화
	string str5("birth day"); // str5 객체 선언 및 초기화
	string str6("to you"); // str6 객체 선언 및 초기화
	string str7 = str4 + str5 + str6; // 위에서 정의한 연산자 오버로드 함수를 이용해 다중 결합 또한 이용 가능함


	cout << "str4 : " << str4 << endl
		<< "str5 : " << str5 << endl
		<< "str6 : " << str6 << endl
		<< "str7 : " << str7 << endl;

	return 0;
}