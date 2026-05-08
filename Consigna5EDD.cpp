#include <iostream>
#include <string>
using namespace std;

struct Alumno{
	string nombre;
	string apellido;
	float notaFinal;
};

struct Empleado{
	string nombre;
	string apellido;
	float sueldo;
};

void aplicarAumento(Empleado personal[], int cantEmpleados,
					Alumno curso[], int cantAlumnos){
	
	for(int i = 0; i < cantAlumnos; i++){
		
		if(curso[i].notaFinal > 7.0){
			
			for(int j = 0; j < cantEmpleados; j++){
				
				if(curso[i].nombre == personal[j].nombre &&
				   curso[i].apellido == personal[j].apellido){
					
					personal[j].sueldo *= 1.10;
					break;
				}
			}
		}
	}
}
	
	int main(){
		
		int totalEmpleados = 3;
		int totalAlumnos = 3;
		
		Empleado personal[3] = {
			{"Arnedo","Jorge",52000},
		    {"Aramburu","Nicolas",76000},
			{"Villagra","Lionel",61000}
		};
		
		Alumno curso[3] = {
			{"Arnedo","Jorge",8.7},
		    {"Aramburu","Nicolas",6.2},
			{"Diaz","Brenda",9.4}
		};
		
		cout << "Sueldos antes del aumento:\n";
		
		for(int i = 0; i < totalEmpleados; i++){
			cout << personal[i].nombre << " "
				<< personal[i].apellido
				<< ": $" << personal[i].sueldo << endl;
		}
		
		aplicarAumento(personal,totalEmpleados,
					   curso,totalAlumnos);
		
		cout << "\nSueldos despues del aumento:\n";
		
		for(int i = 0; i < totalEmpleados; i++){
			cout << personal[i].nombre << " "
				<< personal[i].apellido
				<< ": $" << personal[i].sueldo << endl;
		}
		
		return 0;
	}
			
