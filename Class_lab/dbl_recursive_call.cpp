#include <iostream>
using namespace std;

int count = 0;
int func(int n) {
    count++;
    if(n == 1 || n == 0) return n;
    cout<<n <<" ";
    int x = func(n-1);
    int y = func(n-2);
    return x+y;
}
int fibonacci(int n) {
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    /*int n;
    cout<<"Enter n: ";
    cin>>n;
    int res = func(n);
    cout<<"\n" <<res <<endl;
    cout<<count <<endl;*/

    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        cout<< fibonacci(i) <<" ";
    }
    cout<<endl;
    return 0;
}