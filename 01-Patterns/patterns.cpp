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
void pattern02(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j <= i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern03(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n - i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// NOTE : Consider only left space.
void pattern04(int n){
    for (int i = 1; i <= n; i++) {
        // space
        for (int j = 1; j <= n - i; j++) {
            cout << "1";
        }
        // point
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern05(int n){
    cout << "in\n";
    for (int i = n; i >= 1; i--) {
        //cout << "in";
        // space
        for (int space = 1; space <= n-i; space++) {
            cout << " ";
        }
        //cout << "in";
        // point
        for (int j = 1; j <= 2*i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern06(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j <= i;j++){
            cout << j+1;
        }
        cout << endl;
    }
}

//Floyd's Triangle
void pattern07(int n){
    int counter =1;
    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= i;j++){
            cout << counter++ << " ";
        }
        cout << endl;
    }
}


void pattern10(int n){
    for (int i = 0; i < n; i++)
    {
        if(i == 0 || i == n-1){
            for(int j = 0; j < n;j++){
                cout << "* ";
            }
        }else{
            for(int k = 0; k < n ; k++){
                if(k == 0 || k == n-1){
                    cout << "* ";
                }
                else{
                    cout <<"  ";
                }
            }
        }
        cout << endl;
    }
    
}

// Diamond
void pattern11(int n){
    
}

int main(){
    pattern10(7);
}