#include <iostream>
#include <fstream>
#include "QUICK.h"
using namespace std;
const int TAM = 50;
//Variable de tipo local
string nombrearchivo; 
int mitad (int arr[], int pinicial, int pfinal){


    return arr[(pinicial + pfinal)/ 2];

}


void ALGORITMOQuicksort(int arr[], int pinicial, int pfinal){
    int i = pinicial;
    int j = pfinal;
    int temp;
    int piv = mitad(arr, pinicial, pfinal);

    do{
        while(arr[i] < piv){
            // parte izq del array  
            i++;

        }

        while(arr[j] > piv){
            // parte derecha del array
            j--;

        }

        if( i <= j){
            //INTERCAMBIO DE VALORES
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }



    } while( i <= j );

    if ( pinicial < j){
        ALGORITMOQuicksort(arr, pinicial,j);

    }

    if( i < pfinal){
        ALGORITMOQuicksort(arr, i,pfinal);

    }


}


void escribirArchivo(int arr[], int n){
ofstream archivoprueba;
archivoprueba.open("DEBERquick.txt",ios::out);
int i;

cout <<"Ingrese los elementos del array"<<endl;
ingresarDatosArreglo (arr, n);
cout <<"Los elementos del arreglo son: "<<endl;
imprimirDatosArreglo (arr, n);
cout <<endl;

//SE ORDENA EL ARRAY
ALGORITMOQuicksort(arr, 0, n-1);
cout <<endl;
cout <<"Los elementos ordenados del array son: "<<endl;
imprimirDatosArreglo (arr, n);
 cout <<endl;


archivoprueba << "Los elementos ordenados del array son: "<<endl;
     for (i = 0; i < n; i++ ){
         
         archivoprueba <<"["<<arr[i]<<"]";
        
         }


    archivoprueba.close();
}


void leerArchivo(int arr[], int n){
ifstream archivolectura;
string texto;
int i ;
archivolectura.open("DEBERquick.txt",ios::in);

if( archivolectura.fail() ){
cout <<"\tNo se pudo leer el archivo "<<endl;

} else {
        while (!archivolectura.eof()){
            getline(archivolectura,texto);
            cout << texto;


        }
    }

    archivolectura.close();

}


void ingresarDatosArreglo (int arr[], int n){

int i;

     for (i = 0; i < n; i++ ){
         cout << "Ingrese el numero " <<i + 1<<": ";
         cin >> arr[i];
        

     }


}


void imprimirDatosArreglo ( int arr[], int n){ 

int i;

     for (i = 0; i < n; i++ ){

         cout <<"["<<arr[i]<<"]";
        
     }

}