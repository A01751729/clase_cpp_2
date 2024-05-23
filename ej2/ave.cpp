#include <iostream>
#include "ave.h"
using std::cout;
using std::endl;

Ave::Ave(string x)
{
    nombre=x;

};

void Ave::volar()
{
    cout<<"Soy un ave llamada "<<nombre<<endl;
    cout<<"Soy un ave y vuelo"<<endl;
};