#include<iostream>
using namespace std;

void czy_pierwsza(){
    unsigned int n;
    cin>>n;
    if (n<2){
        cout<<"NIE";
        return;
        }
    for(unsigned int i = 2; i<n; i++)
    {
        if(n%i ==0){
            cout<<"NIE";
            return;
        }
    }
    cout<<"TAK";
    }


int main(){
czy_pierwsza();
return 0;
}
