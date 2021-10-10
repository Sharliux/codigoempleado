#include "Cliente.cpp"
#include "Persona.cpp"
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
    string nit,nombres,apellidos,direccion, puesto, cod;
    int telefono;
    cout<<"Ingrese Nit: ";
    cin>>nit;
    cout<<"Ingrese Nombres: ";
    cin>>nombres;
    cout<<"Ingrese Apellidos: ";
    cin>>apellidos;
    cout<<"Ingrese Direccion: ";
    cin>>direccion;
    cout<<"Ingrese Telefono: ";
    cin>>telefono;
    cout<<"Ingrese puesto: ";
    cin>>puesto;
    cout<<"Ingrese codigo de empleado: ";
    cin>>cod;

    // instanciar un objeto
    Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
    obj.mostrar();
    cout<<"Ingrese Nit: ";
    cin>>nit;
    obj.setNit(nit);
    obj.mostrar();

    Empleado obj = Empleado(puesto, cod);
    obj.mos();
    cout<<"Ingrese codigo: ";
    cin>>cod;
    obj.setCode(cod);
    obj.mos();
    // instanciar un objeto y utilizar get and set

/*    Cliente obj = Cliente();
    obj.setNit(nit);
    obj.setNombres(nombres);
    obj.setApellidos(apellidos);
    obj.setDireccion(direccion);
    obj.setTelefono(telefono);
    //obj.mostrar();
    cout<<"Nit: "<<obj.getNit()<<endl;
    cout<<"Nombres: "<<obj.getNombres()<<endl;
    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
    cout<<"Direccion: "<<obj.getDireccion()<<endl;
    cout<<"Telefono: "<<obj.getTelefono()<<endl;
*/
}
