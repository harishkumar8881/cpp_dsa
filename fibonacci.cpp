#include<iostream>

using namespace std;

// Fibo recursive
void fibo(int n, int a, int b){
    if(n == 0){
        cout << endl;
        return;
    }
    cout << a << " ";
    fibo (n - 1, b, a + b);
}

int main(){
    int n = 10;
    int a = 0, b = 1, c;
    for(int i = 0; i < n; i++){
        cout << a << " ";
        c = b;
        b = a + b;
        a = c;
    }
    cout << endl;

    fibo(10, 0, 1);
    return 0;
}