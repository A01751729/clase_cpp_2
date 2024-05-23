#include <iostream>
#include "aguila.h"
using std:: cout;
using std:: endl;

Aguila::Aguila(string s):Ave(s){
    
};

void Aguila::volar(){
    Ave::volar();
    cout<<"soy la mas rapida"<<endl;
};