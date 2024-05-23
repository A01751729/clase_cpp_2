#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

/*class Padre1{
    public:
    string nombre;
    Padre1(){
        cout<<"constructor padre1"<<endl;
    }
    ~Padre1(){
        cout<<"destructor padre1"<<endl;
    }
};
class Padre2{
    public:
    string nombre;
    Padre2(){
        cout<<"constructor padre2"<<endl;
    }
    ~Padre2(){
        cout<<"destructor padre2"<<endl;
    }
};
class Hijo:public Padre1, public Padre2{

};

int main(){
    Hijo h;
    h.Padre1::nombre="yo";
    cout<<"nombre heredado de padre1: "<<h.Padre1::nombre<<endl;
    cout<<"nombre heredado de padre2: "<<h.Padre2::nombre<<endl;
};*/

class A{
    public:
    void imprimir(){
        cout<<"imprimir desde A"<<endl;
    }
};

class B: virtual public A{};
class C: virtual public A{
    public:
    void imprimir(){
        cout<<"imprimir modificado desde C"<<endl;
    }
};

class D: public B, public C{};

int main(){
    D obj;
    obj.imprimir();
}
