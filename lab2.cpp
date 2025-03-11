#include <iostream>
using namespace std;

void Z1a(unsigned int n) {
    cout << "To jest Z1 podpunkt a)." << endl;
    for (unsigned int i = 0; i < n; i++) {
        cout << i % 10;
    }
    cout << endl;
}
void Z1b(unsigned int n) {
    cout << "To jest Z1 podpunkt b)." << endl;
    for (unsigned int i = 0; i < n; i++) {
        cout << i % 2;
    }
    cout << endl;
}
void Z1d(unsigned int n) {
    cout << "To jest Z1 podpunkt d)." << endl;
    for (unsigned int i = 0; i < n * 4; i++) {
        cout << i % 4;
    }
    cout << endl;
}
void Z1e(unsigned int n) {
    cout << "To jest Z1 podpunkt e)." << endl;
    while (n > 1) {
        for (unsigned int i = 0; i < 10; i++) {
            cout << i;
        }
        n--;
    }
    cout << "0123";
    cout << endl;
}
void Z2d(unsigned int n) {
    cout << "To jest Z2 podpunkt d)." << endl;

    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = n; j > i; j--){
            cout << j;
        }
        cout << endl;
    }
    
}
int main()
{
    unsigned int n;
    cout << "Podaj n do zadan" << endl;
    cin >> n;
    Z1b(n); //tutaj wywołujemy właściwą funkcję abu uruchomić kod z zadanego 

    return 0;
}
 