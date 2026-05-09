#include <iostream>
#include <string>
using namespace std;

struct Alumno{
	string apellido;
	string nombre;
	float promedio;
};

struct Empleado{
	string apellido;
	string nombre;
	float salario;
};

void aumentarSueldo(Empleado personal[], int cantEmpleados,
					Alumno curso[], int cantAlumnos){
	
	for(int i = 0; i < cantAlumnos; i++){
		
		if(curso[i].promedio > 7.0){
			
			for(int j = 0; j < cantEmpleados; j++){
				
				if(curso[i].nombre == personal[j].nombre &&
				   curso[i].apellido == personal[j].apellido){
					
					personal[j].salario *= 1.10;
					break;
				}
			}
		}
	}
}
	
void mostrarEmpleados(Empleado personal[], int cantEmpleados){
	
	for(int i = 0; i < cantEmpleados; i++)
		cout << personal[i].apellido << ", "
		<< personal[i].nombre
		<< " - $" << personal[i].salario << endl;
	}
	
	int main(){
		
		const int cantEmpleados = 3;
		const int cantAlumnos = 3;
			
		Empleado personal[cantEmpleados] = {
			{"Arnedo","Jorge",50000},
		    {"Aramburu","Nicolas",75000},
			{"Villagra","Lionel",60000},
			};
			
		Alumno curso[cantAlumnos] = {
			{"Arnedo","Jorge",8.7},
			{"Aramburu","Nicolas",6.2},
			{"Diaz","Brenda",9.4},
			};
			
		cout << "Salarios antes del aumento:" << endl;
		mostrarEmpleados(personal,cantEmpleados);
			
		aumentarSueldo(personal,cantEmpleados,
		               curso,cantAlumnos);
			
		cout << "\nSalarios despues del aumento:" << endl;
		mostrarEmpleados(personal,cantEmpleados);
			
			return 0;
		}
