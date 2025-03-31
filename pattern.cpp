#include"iostream"
using namespace std;
int main(){
    for(int row=1; row<=5; row++){
        char n = 'A';
        for(int col=1; col<=5-(row-1); col++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    /*for(int row=1; row<=6; row++){
        for(int col=1; col<=row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
        if(row == 6){
            for(int a=1; a<=row; a++)
                cout<<a<<" ";
        }
    }*/
    
    return 0;
}