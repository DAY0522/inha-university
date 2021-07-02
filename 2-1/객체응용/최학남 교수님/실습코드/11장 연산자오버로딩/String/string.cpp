#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1("happy");
	string s2(" birthday");
	string s3;

    cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2 << "\"; s3 is \"" << s3 << "\""
        << "\n\nThe results of comparing s2 and s1:" << endl
        << "s2 == s1 yields " << (s2 == s1 ? "true" : "false") << endl
        << "s2 != s1 yields " << (s2 != s1 ? "true" : "false") << endl
        << "s2 > s1 yields " << (s2 > s1 ? "true" : "false") << endl
        << "s2 < s1 yields " << (s2 < s1 ? "true" : "false") << endl
        << "s2 >= s1 yields " << (s2 >= s1 ? "true" : "false") << endl
        << "s2 <= s1 yields " << (s2 <= s1 ? "true" : "false") << endl
        << endl;

    cout << "\n\nTesting s3.empty()" << endl;

    if (s3.empty())
    {
        cout << "s3 is empty; assigning s1 to s3;" << endl;
        s3 = s1;
        cout << "s3 is \"" << s3 << "\"";
    }

    cout << "\n\ns1 += s2 yields s1 = ";
    s1 += s2;
    cout << s1;

    cout << "\n\ns1 += \" to you\" yields" << endl;
    s1 += " to you";
    cout << "s1 = " << s1 << "\n\n";

    cout << "The substring of s1 starting at location 0 for\n"
        << "14 characters, s1.substr(0,14), is:\n"
        << s1.substr(0, 14) << "\n\n";

    cout << "The substring of s1 starting at\n"
        << "location 15 chars, s1.substr(15), is:\n"
        << s1.substr(15) << endl;

    string* s4Ptr = new string(s1);
    cout << "\n*sPtr = " << *s4Ptr << "\n\n";

    cout << "assigning *s4Ptr to *s4Ptr" << endl;
    *s4Ptr = *s4Ptr;
    cout << "*sPtr = " << *s4Ptr << endl;

    delete s4Ptr;

    s1[0] = 'H';
    s1[6] = 'B';
    cout << "\ns1 after s1[0] = 'H' and s1[6] = 'B' is: " << s1 << "\n\n";
    cout << "Attempt to assign 'd' to s1.at(30) yields: " << endl;
    //s1.at(30) = 'd'; // 30번째 index에 해당하는 값이 유효하지 않으므로 error 발생
    return 0;
}