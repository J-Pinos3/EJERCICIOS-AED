#include <iostream>
using namespace std;

//void busqueda_Lineal (int a[], int n, int dato);
// que pasa si la funcion es bool

bool busqueda_Lineal (int a[], int n, int dato);
int main (){

int a[5] = {4,1,2,3,5};


//CON FUNCIONES

cout << busqueda_Lineal (a, 5, 2);// como en la funcion hay un cout que da el resultado ya no es necesario un cout al principio







    return 0;
}



bool busqueda_Lineal (int a[], int n, int dato){

bool c = false;

for (int i = 0; i <5; i++){ // EL FOR SE MUEVE POR EL ARREGLO 

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






