#include<iostream>
using namespace std;
int main(){
    // int first = 0, second = 1, n, curr;
    // cout<<"How many number you want ?\n";
    // cin>>n;
    // if(n < 1)
    //     cout<<"Not valid !";
    // else{
    //     if(n == 1)
    //         cout<<first;
    //     else if(n == 2)
    //         cout<<first<<"  "<<second;
    //     else{
    //         cout<<first<<"  "<<second;
    //         for(int i=2; i<n; i++){
    //             curr = first + second;
    //             cout<<"  "<<curr;
    //             if(i%2 == 0)
    //                 first = first + second;
    //             else
    //                 second = first + second;
    //         }
    //     }
    // }
    // cout<<endl<<n<<"th fibonacci number is : "<<curr;


    int last = 0, prev = 1, curr, n;
    cout<<"which number you want ?\n";
    cin>>n;
    for(int i=2; i<n; i++){
        curr = prev + last;
        last = prev;
        prev = curr;
    }
    cout<<n<<"th fibonacci number is : "<<curr;
    return 0;
}