#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter year : ";
    cin>>y;
    // if(y%400 == 0)
    //     cout<<y<<" is a leap year.";
    // else if(y%100 == 0)
    //     cout<<y<<" is not a leap year.";
    // else if(y%4 == 0)
    //     cout<<y<<" is a leap year.";
    // else
    //     cout<<y<<" is not a leap year.";

    if(y%4 == 0){
        if(y%100 == 0){
            if(y%400 == 0){
                cout<<y<<" is a leap  year.";
            }
            else{
                cout<<y<<" is not a leap year.";
            }
        }
        else{
            cout<<y<<" is a leap year.";
        }
    }
    else{
        cout<<y<<" is not a leap year.";
    }
    return 0;
}