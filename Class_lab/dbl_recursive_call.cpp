#include <iostream>
using namespace std;

int count = 0;
int func(int n) {
    count++;
    if (n == 1 || n == 0) return n;
    cout<<n <<" ";
    int x = func(n-1);
    int y = func(n-2);
    return x+y;
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int res = func(n);
    cout<<"\n" <<res <<endl;
    cout<<count <<endl;
    return 0;
}