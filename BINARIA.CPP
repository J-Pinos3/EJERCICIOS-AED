#include <iostream>
using namespace std;


int main (){

int b, i, j, k, tam;
int a[10] = {15,28,37,41,55,69,77,81,99,101};
i = 0;  // r inicial array
j = 10 - 1; //r final array
b = 101; //elemento que busco

do {

    k = (i+j)/2;    //mitad del array

    if (a[k] <= b){
     i = k+ 1;   

    } 
     if (a[k] >= b){
     j = k -1;    

    }




}
while(i <= j);
if (a[k] == b){
    cout << "Elemento encontrado en la posicion "<< k <<endl;
} else {cout << "Elemento NO encontrado en la posicion "<< k <<endl;}





    return 0;
}