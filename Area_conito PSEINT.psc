Algoritmo Area_conito
	
	Definir Rad, Alt Como Real
	Definir  Area_Cono Como Real
	Definir Area_Semicirc Como Real
	Definir  Area_Trect Como Real
	

	Escribir "Ingrese el Radio:"  //es el catato adyacente del T rectángulo
	Leer Rad
	Escribir "Ingrese la altura del triangulo:"
	Leer Alt
	
	Area_Semicirc = ((PI * Rad^2))/2     //el exponente se pone alt 94 ^
	
	Area_Trect = (Rad * Alt)/2
	
	Area_Cono = Area_SemiCirc + Area_Trect
	
	
	Escribir "El area del conito es:", Area_Cono
	
	
	
	
FinAlgoritmo
