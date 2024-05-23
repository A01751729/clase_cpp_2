#include <iostream>
#include "pingino.h"
using std:: cout;
using std:: endl;

Pingino::Pingino(string s):Ave(s){
    
};

void Pingino::volar(){
    cout<<"Soy un pinguino llamado "<<nombre<<endl;
    cout<<"No puedo volar"<<endl;
};