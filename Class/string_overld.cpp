#include<iostream>
#include<string>
using namespace std;

class string_add {
    string str;
    public:
        string_add () { }
        string_add (string s);
        string_add operator + (string_add &s);
        friend void display(string_add &s);
};
string_add :: string_add (string s) {
    str = s;
}
string_add string_add :: operator + (string_add &s) {
    string_add temp;
    temp.str = str + s.str;
    return temp;
}
void display(string_add &s) {
    cout<<s.str<<endl;
}

int main() {
    string_add s1("New "), s2("Delhi");
    display(s1);
    display(s2);
    string_add s3 = s1 + s2;
    display(s3);
    return 0;
}