#ifndef _IMPRESORA_H_
#define _IMPRESORA_H_
#include <string>
using std:: string;

class Impresora{
    private: 
    int numHojas;
    string nombre;

    public:
    void imprimir(string txt);
    void recargar(int num);
    Impresora(string nom,int nh);

    

};

#endif