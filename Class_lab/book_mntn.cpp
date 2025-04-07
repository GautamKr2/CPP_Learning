#include <iostream>
using namespace std;

class book {
    string author;
    string title;
    float price;
    string publisher;
    int stk_psn;
    public:
        pair<book, int> srch_bk(string athr, string tle);
        
};
pair<book, int> book :: srch_bk(string athr, string tle) {

}

int main() {

    return 0;
}