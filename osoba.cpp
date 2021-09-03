#include <iostream>
#include <string>

using namespace std;

class osoba
{
private:
        string imie, nazwisko;
        int wiek;
public:
		osoba(string,string,int);
		~osoba();

       void wyswietl();
};

int main(int argc, char** argv) {
	
	osoba x("Jan","Kowalski",40);
          x.wyswietl();
    osoba y("Andrzej","Czekaj",20);
          y.wyswietl();
    osoba z("Kamil","Nowak",66);
          z.wyswietl();
	osoba c("Ludwik","Hajzer",33);
          c.wyswietl();
    osoba v("Agnieszka","Duda",43);
          v.wyswietl();
    osoba vv("Mateusz","Natek",63);
          vv.wyswietl();
          system("PAUSE");
	  
	return 0;
}

osoba::osoba(string t,string y, int z)
{
             imie=t;
             nazwisko=y;
             wiek=z;
}

osoba::~osoba()
{
    cout<<"Usuwamy osobe: "<<imie<<" "<<nazwisko<<"\n";
}
void osoba::wyswietl()
{
     cout<<imie<<" "<<nazwisko << " ma " << wiek << " lat\n";
}

