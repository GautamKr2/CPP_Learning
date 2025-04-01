#include<iostream>
using namespace std;

/*class PC {
    public:
        void display() {
            cout<<"Parent Class !\n";
        }
};*/
class PC {
    public:
        virtual void display() {
            cout<<"Parent Class !\n";
        }
};
class DC: public PC {
    public:
        void display() override {
            cout<<"Derived Class !\n";
        }
};

int main() {
    PC p1;
    DC d1;
    /*p1.display();
    d1.display();*/

    PC *ptr;
    ptr = &p1;
    ptr -> display();
    ptr = &d1;
    ptr -> display();
    return 0;
}