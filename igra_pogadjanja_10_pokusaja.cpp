#include <iostream>
#include <ctime>
using namespace std;
int main(){
srand(time(0));

  int zadati_broj  = rand()&100;
  int pokusaj = 0;
  int Pogadjanja = 0;

  cout<< " Igra pogadjanja :)"<<endl;
cout<< " Maksimalan broj pokusaja 10 "<<endl;

  do
   {
    Pogadjanja++;

cout<< "Unesite vas broj" <<endl;

cin>>pokusaj;
if (pokusaj == zadati_broj)
cout<<"Cestitam! Pogodili ste broj! "<<endl;
else if (pokusaj<zadati_broj)

cout<< "Uneli ste manji broj!" <<endl;

else
cout<< "Uneli ste veci broj!" <<endl;

} while (pokusaj != zadati_broj && Pogadjanja >=0 && Pogadjanja <=9);

cout<<"Iskoristili ste "  << Pogadjanja <<  " pokusaja!"<<endl;

  return 0;
}
