#include "Negocios.h"
#include <sstream>
using std::stringstream;
vector<Producto> Negocios::getProductos(){
    return productos;
}
string Negocios::toString(){
    stringstream imprimir;

    return imprimir.str(); 
}
Negocios::Negocios(string nom,string ubic,int loc,vector<Producto> produc){
    nombre=nom;
    ubicacion=ubic;
    locales=loc;
    productos=produc;
}