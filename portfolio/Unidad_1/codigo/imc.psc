Algoritmo CalcularIMC
	Definir peso, altura, imc Como Real
	
	Escribir "================================"
	Escribir "      CALCULADORA DE IMC        "
	Escribir "================================"
	Escribir "Ingrese su peso en kg: "
	Leer peso
	Escribir "Ingrese su altura en metros: "
	Leer altura
	
	imc <- peso / (altura * altura)
	
	Escribir "================================"
	Escribir "Su IMC es: ", imc
	Escribir "================================"
FinAlgoritmo
