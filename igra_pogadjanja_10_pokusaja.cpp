#include <iostream>
#include <ctime>
using namespace std;
int main(){
  srand(time(0));

  int zadati_broj  = rand()&10;
  int pokusaj = 0;
  int Pogadjanja = 0;

  cout<< " Igra pogadjanja :)"<<endl;
  cout<< " Maksimalan broj pokusaja 10 "<<endl;

  // uvjek formatiraj kod da je lakse citati i koristi zagrade.
  do
  {
    Pogadjanja++;
    cout<< "Unesite vas broj" <<endl;
    cin>>pokusaj;

    if (pokusaj == zadati_broj){
      cout<<"Cestitam! Pogodili ste broj! "<<endl;
      // break znaci da ce program stati i da se nece vise izvrsavati
      // tako da ne moras stavljati puno uslova u while
      break;
    }

    if (pokusaj < zadati_broj){
      cout<< "Uneli ste manji broj!" <<endl;
    }

    if(pokusaj > zadati_broj){
      cout<< "Uneli ste veci broj!" <<endl;
    }

    // Pogadjanja je uvjek veci od 0 nema potrebe da to provjeravas
  } while (Pogadjanja <=9);

  cout<<"Iskoristili ste "  << Pogadjanja <<  " pokusaja!"<<endl;

  return 0;
}
