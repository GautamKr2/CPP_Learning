#include<iostream>
using namespace std;
int main(){
    int A[8] = {4, 2, 0, 5, 2, 6, 2, 3};
    int stock = 0, small = 0, hi = -1, x = 1;
    while(x < 8){
        if(A[x-1] > A[x]){
            x++;
        }
        else{
            hi = x;
            for(int i=x-1; i>small; i--){
                if(A[small] < A[hi]){
                    stock = (A[small] - A[i]) + stock;
                }
                else{
                    stock = (A[hi] - A[i]) + stock;
                }
            }
            small = hi;
            x++;
        }
    }
    cout<<stock;
    return 0;
}