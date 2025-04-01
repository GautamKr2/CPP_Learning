#include <iostream>
using namespace std;

int chk_leap_yr(int y);
int chk_mnth(int m);
class Calender {
    int dd, mm, yyyy;
    public:
        Calender() {}
        Calender(int d, int m, int y);
        void operator++();
        friend int chk_leap_yr(int y);
        friend int chk_mnth(int m);
        friend void display(Calender &c);
};
Calender :: Calender(int d, int m, int y) { // Constructor definition
    dd = d; mm = m; yyyy = y;
}
void display(Calender &c) {
    cout<<c.dd<<" "<<c.mm<<" "<<c.yyyy<<endl;
}
void Calender :: operator++() {
    int mth = chk_mnth(mm);
    switch(mth) {
        case 1: // This is for February
            if(chk_leap_yr(yyyy)){
                if(dd<1 || dd>29)
                    cout<<"Invalid day !\n";
                else if(dd < 29)
                    dd++;
                else {
                    dd = 01; mm = 03;
                }
            }
            else {
                if(dd<1 || dd>28)
                    cout<<"Invalid day !\n";
                else if(dd < 28)
                    dd++;
                else {
                    dd = 01; mm = 03;
                }
            }
            break;
        case 2: // This is for December
            if(dd<1 || dd>31)
                cout<<"Invalid day !\n";
            else if(dd < 31)
                dd++;
            else {
                dd = 01; mm = 01; yyyy++;
            }
            break;
        case 3:
            if(dd<1 || dd>31)
                cout<<"Invalid day !\n";
            else if(dd < 31)
                dd++;
            else {
                dd = 01; mm++;
            }
            break;
        case 4:
            if(dd<1 || dd>30)
                cout<<"Invalid day !\n";
            else if(dd < 30)
                dd++;
            else {
                dd = 01; mm++;
            }
            break;
    }
}
int chk_mnth(int m) { // Function for checking month
    if(m<1 || m>12)
        cout<<"Invalid month !\n";
    else if(m == 2) // For february
        return 1;
    else if(m == 12) // For December
        return 2;
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10) // For month of 31 days
        return 3;
    else if(m==4 || m==6 || m==9 || m==11) // For month of 30 days
        return 4;
    else
        cout<<"Invalid month !\n";

}
int chk_leap_yr(int y) { // Function for checking leap year
    if(y%4 == 0){
        if(y%100 == 0) {
            if(y%400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int main() {
    int d, m, y;
    cout<<"Enter dd mm yyyy : ";
    cin>>d>>m>>y;
    Calender c1(d, m, y);
    display(c1);
    ++c1;
    display(c1);
    return 0;
}