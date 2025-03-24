#include<iostream>
using namespace std;
class Zwierze{
    protected:
        int wiek;
        string imie;
    public:
        void setImie(string przekazaneimie){imie = przekazaneimie;};
        virtual void dajGlos(){cout<<"niezdefiniowany dziwek";};
};
class ptak : public Zwierze{
	int skrzydla;
	public:
        void dajGlos(){cout<<"Kwa kwa";};
};


int main(){
    int suma;
    ptak Ptaszor;
    Ptaszor.setImie("imiePtaszora");
    Ptaszor.dajGlos();
    return 0;
}
