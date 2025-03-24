#include<iostream>
using namespace std;
int podzielne7 (int a, int b){
  int suma = 0;
  for(int i = a; i<=b; i++){
    if(i%7==0){
      suma+=i ;
    }
  }
  return suma;
}

int main(){
  cout<< podzielne7(6, 20);
  return 0;
}
