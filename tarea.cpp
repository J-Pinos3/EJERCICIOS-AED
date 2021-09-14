#include <iostream>
#include <fstream>
#include "QUICK.h"
using namespace std;

 
int main(){
int arrarray[50];
int n;
cout <<"Ingrese el numero de elementos del array"<<endl;
cin >> n;


escribirArchivo(arrarray, n);
leerArchivo(arrarray, n);


    return 0;
}

