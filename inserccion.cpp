#include <iostream>
using namespace std;

void ALGORITMOinsercion(int arr[], int n);


int main(){

int arrarray[]= {8,6,3,2,1,99,56,13,-89,-5,15};

ALGORITMOinsercion(arrarray, 11);



    return 0;
}


void ALGORITMOinsercion(int arr[], int n){

int aux; // sirve para el intercambio de variables

    for(int i = 0; i < n; i++){
        aux = arr[i];
        int p = i; // almacena la posicion o indice del arreglo

        while (p > 0){
            if(arr[p-1] > aux){

                arr[p] = arr[p-1];
                arr[p-1] = aux;

            }

            p = p - 1;
        }


    }

    for (int i=0; i < n ; i++){ // imprime los datos del array

            cout <<"["<<arr[i]<<"]";
    }



}