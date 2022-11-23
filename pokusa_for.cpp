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

  for(int i = 0; i < 9; i++){
    cout<< "Unesite vas broj" <<endl;
    cin>>pokusaj;

    if (pokusaj < zadati_broj){
      cout<< "Uneli ste manji broj!" <<endl;
    }

    if(pokusaj > zadati_broj){
      cout<< "Uneli ste veci broj!" <<endl;
    }

    if(pokusaj == zadati_broj){
      cout<<"Cestitam! Pogodili ste broj! "<<endl;
      Pogadjanja = i + 1; // ovo +1 je dodato  kako bi bilo citljivije korisniku
      break;
    }
  }

  cout<<"Iskoristili ste "  << Pogadjanja <<  " pokusaja!"<<endl;

  return 0;
}
