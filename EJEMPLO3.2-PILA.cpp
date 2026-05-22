#include <iostream>
using namespace std;

int S[5];
int tope = 0;
int n = 5;

void LLENA() { cout << "PILA LLENA" << endl; }
void VACIA() { cout << "PILA VACIA" << endl; }

// 3.1 PROC. AGREGAR ( x, S, n, tope )
void AGREGAR(int x) {
	if (tope == n) { LLENA(); return; }
	tope = tope + 1
	S[tope] = x;
}

// 3.2 PROC. ELIMINAR ( x, S, tope )
void ELIMINAR(int &x) {
	if (tope <= 0) { VACIA(); return; }
	x = S[tope];
	tope = tope - 1;
}

int main() {
	int x;
	
	AGREGAR(1);
	AGREGAR(2);
	AGREGAR(3);
	
	ELIMINAR(x);
	cout << "x = " << x << endl;
	
	ELIMINAR(x);
	cout << "x = " << x << endl;
	
	return 0;
}

