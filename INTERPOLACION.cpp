#include <iostream>
using namespace std;



int main(){


//SE CONSIDERA EL ARRAY YA ORDENADO
int arr[7]= {13,28,36,49,56,62,79};

int primero = 0;
int ultimo = 7-1;
int medio;
int n = 79;
int contador = 0;
// 7 ES EL TAMAÑO DEL ARREGLO
while ( (arr[primero] != n) && (contador < 7) ){
    
medio = primero + ((n - arr[primero])* (ultimo - primero))/(arr[ultimo] - arr[primero]); 

    if(arr[medio] < n){

        primero = medio + 1;

    } else if (arr[medio] > n){
                ultimo = medio -1;

            } else { primero = medio; }



    contador ++;
    break;
}


    if (arr[primero] == n){
            cout <<"Elemento encontrado"<<endl;

    } else {cout <<"Elemento NO encontrado"<<endl;}



    return 0;
}
