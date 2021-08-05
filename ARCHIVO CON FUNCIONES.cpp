#include <iostream>
using namespace std;
#include <fstream>

//Variable de tipo local
string nombrearchivo; 

void escribirArchivo();
void leerArchivo();






int main() 
{
  escribirArchivo();
  leerArchivo();

  return 0;
}





void escribirArchivo()
{
  string nombre;
  string apellido;
  string direccion;
  int edad;
  char r;
  ofstream archivoprueba;
  cout<<"Ingrese el nombre del archivo: ";
  

  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  do
  {
    cout<<"\t Ingrese el nombre:";
    getline(cin,nombre); 
    cout<<"\t Ingrese el apellido:";
    getline(cin,apellido); 
    cout<<"\t Ingrese la edad:";
    cin>>edad;
    cin.get();
    cout <<"\t Ingrese la dirección:";
    getline(cin,direccion);

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<" "<<direccion <<endl;

    cout<<"Desea ingresar otro contacto s/n ";

    cin>>r;

    cin.ignore();
  }
  while(r=='s');

  archivoprueba.close();

}




void leerArchivo()
{
  string nombre;
  string apellido;
  string direccion;
  int edad;
  ifstream archivolectura(nombrearchivo);
  string texto;
  while(!archivolectura.eof()){
      archivolectura>>nombre>>apellido>>edad;

      if(!archivolectura.eof()){
              cout<<" Nombre:"<<nombre<<endl;
              cout<<" Apellido:"<<apellido<<endl;
              cout<<" Edad:"<<edad<<endl;
              cout<<" Dirección:"<<direccion<<endl; 
            }
    }
  archivolectura.close();

}





