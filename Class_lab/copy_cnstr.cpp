/*#include <iostream>
using namespace std;

class Shallow {
public:
    int *data;
    
    Shallow(int value) {
        data = new int(value); // Dynamically allocated memory
    }

    // Default copy constructor (shallow copy)
    Shallow(const Shallow &obj) {
        data = obj.data; // Only copies the pointer, not the data
    }

    void show() {
        cout << "Value: " << *data << endl;
    }

    ~Shallow() {
        delete data; // Free memory
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2 = obj1; // Shallow copy

    obj1.show();
    obj2.show();

    // Changing obj1's value
    *obj1.data = 20;
    
    obj1.show(); // 20
    obj2.show(); // 20 (changes because of shallow copy)

    return 0;
}*/



#include <iostream>
using namespace std;

class Deep {
public:
    int *data;

    Deep(int value) {
        data = new int(value);
    }

    // Deep copy constructor
    Deep(const Deep &obj) {
        data = new int(*obj.data); // Allocates new memory and copies data
    }

    void show() {
        cout << "Value: " << *data << endl;
    }

    ~Deep() {
        delete data; // Free memory
    }
};

int main() {
    Deep obj1(10);
    Deep obj2 = obj1; // Deep copy

    obj1.show();
    obj2.show();

    // Changing obj1's value
    *obj1.data = 20;

    obj1.show(); // 20
    obj2.show(); // 10 (unchanged because of deep copy)

    return 0;
}
