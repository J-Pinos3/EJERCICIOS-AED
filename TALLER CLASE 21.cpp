#include <iostream>
using namespace std;
#include <fstream>

//Variable de tipo local
string Lineal; 

void escribirArchivo();
void leerArchivo();
void ingresar (int a[], int n);
int busqueda_Lineal (int a[], int n, int dato);
void imprimir (int a[], int n);



int main(){ 

  escribirArchivo();
  leerArchivo();

  return 0;
}


void ingresar (int a[], int n){

int i;
    for (i = 0; i < n; i++){

        cin >> a[i];

    }

}


int busqueda_Lineal (int a[], int n, int dato){

bool c = false;

for (int i = 0; i < 5; i++){ // EL FOR SE MUEVE POR EL ARREGLO 

    if (a[i] == dato ){

        cout << "Dato encontrado"<< " Posicion " << i + 1<<endl;
        c = true;

    }

}
    if (c == false ){

     cout << "El valor no está en el arreglo "<<endl;

    }

    // 0 = false ---- 1 = true
    return c ;
}


void imprimir (int a[], int n){

int i ;
for (int i=0;i<n;i++){

    cout << a[i];
}
cout << endl;


}




void escribirArchivo(){
  const int TAMANIO = 20;
  int a[]= {};
  int dato, n;

  ofstream archivoprueba;
  cout<<"Ingrese el nombre del archivo: ";
  
  getline(cin,Lineal);
  archivoprueba.open(Lineal.c_str(),ios::out);

  cout<< "Ingrese el numero elementos del array"<<endl;
  cin >> n;

  cout<< "Ingrese los elementos del array"<<endl;
  ingresar (a, n);
  cout<< "Los elementos del array son: "<<endl;
  imprimir (a, n);

  cout << "INgrese el dato que desea buscar "<<endl;
  cin >> dato;
  busqueda_Lineal (a, n, dato);
  


  archivoprueba.close();

}



void leerArchivo()
{
  
  const int TAMANIO = 20;
  int a[]= {};
  int dato, n;

  ifstream archivolectura(Lineal);
  string texto;


  archivolectura.close();
}
