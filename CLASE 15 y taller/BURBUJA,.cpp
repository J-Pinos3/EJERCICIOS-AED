#include <iostream>
using namespace std;

/*

const int TAM = 50;
void ingresar (int a[], int n);
void ordenar (int a[], int n); 
void imprimir (int a[], int n);

int main(){

// ORDENAMIENTO BURBUJA
int arreglo1[]={4,1,2,3,5}; 
            //  0 1 2 3 4 POSICIONES
cout << arreglo1[0]<<endl; //imprime 4   

int i, j,aux;


for (i = 0; i < 5; i++){
    cout << arreglo1[i];//elementos del arreglo
}   



cout << "*****************\n\n"<<endl;


//BURBUJA   
for (i =0; i< 5;i++){ //i toma el elemento del arreglo


    for (j = i + 1; j < 5 ; j ++){ //j es el elemento adyacente para la comparación

        if(arreglo1[j] < arreglo1[i] ){
            //intercambio de numeros
            aux = arreglo1[i];
            arreglo1[i] = arreglo1[j];
            arreglo1[j] = aux;

          }


    }


}   



//***********************-----------------********



int a[5];
cout << "Ingresar los elementos del arreglo \n"<<endl;
ingresar (a,5);
ordenar (a,5);
cout << "Elementos ordenados\n "<<endl;
imprimir (a,5);


    return 0;
}

 
//int a[]={4,1,2,3,5}; 
            //  0 1 2 3 4 POSICIONES
//cout << a[0]<<endl; //imprime 4   





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

    cout << a[i]<<endl;
}



}   


*/




int main (){

string juego;

if (juego == "Minecraft") {
cout << "\t Buen juego "<<endl;
} else (cout << "\t Rocket league es un buen juego"<<endl);

 juego =( "Minecraft" )? "Buen juego" : "Rocket league es in buen juego" ;




    return 0;
}



















