#include <iostream>
using std::cout;
using std::endl;

class Padre
{
    public:
    int x=5;

    Padre(int x1)
    {
        x=x1+5;
    };

    void imprimir(){
        cout<<"la variable x: "<<x<<endl;
    }
    ~Padre()
    {cout<<"Destructor de padre"<<endl;};
};

class Hija: Padre
{
    public:
    int y;
    Hija(int x1, int y1):Padre(x1)
    {
        y=y1;
    };
    void imprimir() //sobreescribiendo metodo imprimir (sobreeescritura de metodos)
    {
        Padre::imprimir(); //llamar al metodo de la superclase
        cout<<"La variable x heredada: "<<x<<endl;
        cout<<"La variable y: "<<y<<endl;

    }
    ~Hija()
    {cout<<"Destructor de Hija"<<endl;};
};

int main()
{

    Hija h(10,15);
    h.imprimir();



    return 0;
};