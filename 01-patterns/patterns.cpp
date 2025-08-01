#include <iostream>
using namespace std;

void pattern01(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    pattern01(5);
}