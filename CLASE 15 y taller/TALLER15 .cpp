#include <iostream>
using namespace std;

void ingresar (int a[], int n);
void ordenar (int a[], int n); 
void imprimir (int a[], int n);


int main (){

int a[9];
cout << " Ingrese los elementos del arreglo\n\n "<<endl;
ingresar (a,9);
ordenar (a,9);
cout << "Los elementos ordenados son: \n" <<endl;
imprimir (a,9);


    return 0;
}




void ingresar (int a[], int n){

int i;
for (i=0; i<n; i++){

    cin >> a[i];
    }

}




void ordenar (int a[], int n) {

int i, j,aux;


//BURBUJA   
     for (i =0; i< n;i++){ //i toma el elemento del arreglo



        for (j = i + 1; j < n ; j ++){ //j es el elemento adyacente para la comparación

            if(a[j] < a[i] ){
            //intercambio de numeros
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;

            }


        }


    } 



}




void imprimir (int a[], int n){

int i ;
for (int i=0;i<n;i++){

    cout << a[i];
}



}   














