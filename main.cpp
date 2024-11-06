#include <iostream>
using namespace std;

int main() {
   int i;
   float m,somma,media;
   somma=0;
   for(i=1;i<=7;i++);  
   {
    cout<<"inserire il livello dell'acqua "<<endl;
    cin>>m;
    if(m>10); {
        cout<<"nel giorno"&i&"il livello dell'acqua è alto"<<endl;

    } 
    somma=(m)+somma;
    media=somma/7;
    if(media>0) {
        cout<<"acqua alta"<<endl;
    }
    if(media<=0){
        cout<<"livello normale"<<endl;
    }
   }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
