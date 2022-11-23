#include <iostream>

using namespace std;
int main(){

int godina;
char izbor[1];
int i=0;

while(i==0){
cout<<"Unesite godinu: ";
cin>>godina;
if(godina>0){


switch(godina%4) {
  case 0:
  cout<<"Uneta godina je prestupna"<<endl;
  break;
  default:
  cout<<"Uneta godina nije prestupna"<<endl;
  break;
}
}else{
  cout<<"Uneti broje je manji ili jednak nuli";
}
cout<<"Da li zelite ponovo unijeti godinu?/nda-d/ne-n"<<endl;
cin>>izbor[0];
while (tolower(izbor[0]) !='d' && tolower (izbor[0]) !='n'){

  cout<<"Unesite 'd' za da ili 'n' za ne:<<endl";
  cin>>izbor[0];
}
if(tolower(izbor[0])=='n') {
  i++;
}

}



  return 0;
}
