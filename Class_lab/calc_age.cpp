#include <iostream>
using namespace std;

int add_day(int, int);
int chk_leap_yr(int y);
class Date {
    private:
        int d, m, y;
    public:
        Date() {}
        Date(int d, int m, int y) {
            this->d = d; this->m = m; this->y = y;
        }
        friend void display(Date &d);
        void age_calc(Date &b_d);
};
int chk_leap_yr(int y) {
    return ((y%4==0 && y%100!=0) || y%400==0) ? 1 : 0;
}
int add_day(int m, int y) {
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        return 31;
    else if(m==2)
        return chk_leap_yr(y) ? 29 : 28;
    else if(m==4 || m==6 || m==9 || m==11)
        return 30;
}
void display(Date &d) {
    cout<<d.d <<" " <<d.m <<" " <<d.y<<endl;
}
void Date :: age_calc(Date &b_d) {
    if(d < b_d.d) {
        /*if(m == 1) {
            m = 12;
            d += add_day(m, y);
            y--;
        } //*/ d += m==1 ? add_day(m=12, y--) : add_day(m--, y);
        /*else {
            d += add_day(--m, y);
        }*/
    }
    if(m < b_d.m) {
        m += 12;
        y--;
    }
    int dd = d - b_d.d;
    int mm = m - b_d.m;
    int yy = y - b_d.y;
    cout<<"Your age is : "<<yy<<" years "<<mm<<" months "<<dd<<" days\n";
}

int main() {
    int d, m, y;
    cout<<"Enter your b'date(dd mm yyyy): ";
    cin>>d >>m >>y;
    Date b_date(d, m, y);
    cout<<"Your b'date is : ";
    display(b_date);
    cout<<"Enter the current date(dd mm yyyy): ";
    cin>>d >>m >>y;
    Date c_date(d, m, y);
    cout<<"Current date is : ";
    display(c_date);
    cout<<"Your age is :\n";
    c_date.age_calc(b_date);
    return 0;
}