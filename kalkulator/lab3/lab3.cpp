#include <iostream>
using namespace std;
double mem;
bool mem_used;
double add(double a, double b) {
	mem = a + b;
	mem_used = true;
	return a + b;
}
double sub(double a, double b) {
	mem = a - b;
	mem_used = true;
	return a - b;
}
/*double tim(double a, double b) {
//tutaj coś się mnoży
}
double div(double a, double b) {
//tutaj dzielą się liczby, uwaga na 0!
}*/
double mod(double a, double b) { 
	return a - (int)(a / b) * b;
}
void erase(){
	mem = 0.0;
	mem_used = false;

}
void menu(){
//tutaj dzieje się menu
}
int main()
{
 //a tutaj dzieje się jak najmniej  
}