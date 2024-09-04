#include <iostream>
using namespace std;

typedef string Cadena;

struct _persona{
    Cadena ci;
    Cadena nom;
    _persona * sig;
};
typedef _persona* Persona;

Persona crearPersona (Cadena nom, Cadena ci);

int main () {
    
    return 0;
}

Persona crearPersona (Cadena nom, Cadena ci){
    Persona p = new _persona;
    

}