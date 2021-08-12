#include <iostream>
using namespace std;

void busquedaBinaria (int a[], int n, int dato);
void Burbuja (int a[], int n);


int main (){

int a[10] = {95,15,77,37,41,55,101,28,69,81};
Burbuja(a,10);
busquedaBinaria (a, 10, 28);



    return 0;
}




void busquedaBinaria (int a[], int n, int dato){

int b, i, j, k;
i = 0;  // r inicial array
j = n - 1; //r final array

    do {

    k = (i+j)/2;    //mitad del array

    if (a[k] <= dato){
     i = k+ 1;   

    } 
     if (a[k] >= dato){
     j = k -1;    

    }




    }
        while(i <= j);
            if (a[k] == dato){
            cout << "Elemento encontrado en la posicion "<< k <<endl;
        } else {cout << "Elemento NO encontrado en la posicion "<< k <<endl;}


}





void Burbuja (int a[], int n){

int aux;


//BURBUJA   
for (int i =0; i< n;i++){ //i toma el elemento del arreglo



    for (int j = i + 1; j < n ; j ++){ //j es el elemento adyacente para la comparación

        if(a[j] < a[i] ){
            //intercambio de numeros
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;

          }


    }


} 




}




















