#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int emp_id;
    float salary;
    public:
        Employee() {
            cout<<"Welcome !\n";
        }
        Employee(string n, int id, float slry);
        Employee(Employee &e);
        friend void display(Employee &e);
};
Employee :: Employee(string n, int id, float slry) {
    cout<<"Welcome !\n";
    name = n;
    emp_id = id;
    salary = slry;
}
Employee :: Employee(Employee &e) {
    cout<<"Welcome !\n";
    name = e.name;
    emp_id = e.emp_id;
    salary = e.salary;
}
void display(Employee &e) {
    cout<<"Name of the employee : "<<e.name<<endl;
    cout<<"Id of the employee : "<<e.emp_id<<endl;
    cout<<"Salary of the employee : "<<e.salary<<endl;
}

int main() {
    Employee e1("Sudheer", 101, 45000);
    cout<<"Details of 1st employee :\n";
    display(e1);
    Employee e2(e1);
    cout<<"Details of 2nd employee :\n";
    display(e2);
    return 0;
}