#include <exception>
#include <iostream>
#include <string>
using std:: string;
using std:: exception;
using std:: cout;
using std:: endl;

class Miexcepcion: public exception{
    public:
    string mensaje;
    Miexcepcion(string m){
        mensaje=m;
    }
    void imprimir(){
        cout<<"En objeto miexcepcion el mensaje es: "<<mensaje<<endl;
    }

};
