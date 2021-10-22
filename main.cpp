#include <iostream>
using namespace std;

// Ako se unese koliko je sati (s) i minuta (m) računar treba da nam kaže koliko je sati ali na "prirodan" način.(Npr. devet i petnaest; pola deset; petnaest do deset). Pravila su sljedeća: ako je broj minuta manji od 30 ispis je u formi "sati i minuta", ako je broj minuta veći od 30 ispis je u formi "minut do sati" a ako je broj minuta jednak 30 ispis je u formi "pola sata" ako je sat nula ili 24 a minute jednake nuli ispisuje se riječ "ponoć".

int main() {
 int s, m;

 cout<<"Unesite koliko je sati i minuta u formi => sati pa minute:"<<endl;
 cin>> s >> m;
 if (s==0;s==24 && m==0)
   cout<<"Trenutno je ponoć."<<endl;
 else if (m<30)
   cout<< "Trenutno je " << s << " sati i " << m << " minuta."<<endl;
 else if (m>30)
   cout<<"Trenutno je "<< 60 - m << " minuta do "<< s+1 <<" sati."<<endl;
  else if (m==30)
  cout<<"Trenutno je pola"<< s+1 << endl;
  
}