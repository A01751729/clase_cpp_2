#include <iostream>
#include "ave.h"
using std::cout;
using std::endl;

Ave::Ave(string x)
{
    nombre=x;
    cout<<"Me llamo "<<nombre<<endl;

};

void Ave::volar()
{
    cout<<"Soy un ave y vuelo"<<endl;
};