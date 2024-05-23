#include <iostream>
#include "ave.h"
#include "aguila.h"
#include "pingino.h"
#include <string>
using std::string;
int main()
{
    string nom="ave genial";
    string name="aguila poderosa";
    string nombre="pinguino bonito";

    Ave ave(nom);
    ave.volar();

    Aguila a(name);
    a.volar();

    Pingino p(nombre);
    p.volar();

    return 0;
}