#include <iostream>
using namespace std;

class Increment {
    int i;
    public:
        Increment() {}
        Increment(int x){ i = x; }
        void operator++() {
            i++;
        }
        void operator++(int) {
            i++;
        }
        void display() {
            cout<<i<<endl;
        }
};

int main() {
    Increment i1(4);
    i1.display();
    ++i1;
    i1.display();
    i1++;
    i1.display();
    return 0;
}