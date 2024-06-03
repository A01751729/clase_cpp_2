#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"
using std:: string;
using std:: cout;
using std:: endl;

int main(){

    Impresora dell("Dell-3472",50);
    try{
    dell.imprimir("Hola mundo");
    dell.imprimir("Acá también puedes ver el resultado de votación de los candidatos a la jefatura de Gobierno de Ciudad de México: la ganadora de la contienda, Clara Brugada de la coalición Juntos hacemos historia, conformada por los partidos Morena, Partido del Trabajo y el Partido Verde Ecologista; Santiago Taboada, de la alianza Va por México del Partido Revolucionario Institucional (PRI), Partido Acción Nacional (PAN) y Partido de la Revolución Democrática (PRD); y Salomón Chertorivski, de Movimiento Ciudadano.");
    }
    catch(Miexcepcion &m){
        m.imprimir();
    }
    catch(string &s)//lanza por valor, cacha por referencia
    {
        cout<<"string lanzado, mensaje es: "<<s<<endl;
    }
    catch(const char * s){
        cout<<"char lanzado, mensaje es: "<<s<<endl;
    }
    catch(int i){
        cout<<"entero lanzado, mensaje es: "<<i<<endl;
    }
    catch(...){
        cout<<"En el atrapa todo"<<endl;
    }
    return 0;
}