#include <iostream>
#include <cmath>
using namespace std;

int main (){

double L1, L2, L3, cat1, cat2, hipotenusa, area;

cout << "Ingrese el lado 1 "<<endl;
cin >> L1;
cout << "Ingrese el lado 2 "<<endl;
cin >> L2;
cout << "Ingrese el lado 3 "<<endl;
cin >> L3;

//Encontrar la hipotenusa
if ( (L1>L2) ){
    cat1 = L2;
         if (L1>L3){
         hipotenusa = L1;
         cat2 = L3;

        }  else  { 
                hipotenusa = L3;  
                cat2 = L1;
            }


}   else {

	cat1 = L1;
	if (L2 > L3){
 	hipotenusa = L2;
	cat2 = L3;
	} else {
		hipotenusa = L3;
		cat2 = L2;
	}


	}



if ( pow(hipotenusa,2) == pow(cat1,2) + pow(cat2,2) ){

area = cat1 * cat2 /2 ;

cout << "El área es: " << area << endl;

}	else {
	cout << "No es un triángulo rectángulo "<<endl;

}







    return 0;
}




	







