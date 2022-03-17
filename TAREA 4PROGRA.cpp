#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
	int filas, columnas, suma = 0 ;
	
cout << "---------------------TAREA NUMERO 4 DE PROGRAMACION 1---------------------" << endl;
cout << "------------------------RAUL GONZALEZ 7691-21-16489-----------------------\n\n\n" << endl;
cout << "INGRESE EL NUMERO DE FILAS CON LAS QUE DESEA ELABORAR SU MATRIZ:\n";
cin >> filas;
cout << "INGRESE EL NUMERO DE COLUMNAS CON LAS QUE DESEA ELABORAR SU MATRIZ:\n";
cin >> columnas;

int matriz[filas][columnas];

cout << "\nINGRESE LOS DATOS DE LA MATRIZ:\n";
for( int i = 0; i < filas; i++ ){
        cout << "\nFILAS " << i << ":\n";
        for( int j = 0; j < columnas; j++ ){
            cout << "(" << j << "/" << columnas << "): ";
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }
cout << "\nLA SUMA DE LA MATRIZ ES DE: " << suma << endl;
    if (suma % 2 == 0) {
    printf("\nEL RESULTADO DE LA SUMA ES: PAR\n");
  } else {
    printf("\nEL RESULTADO DE LA SUMA ES: IMPAR\n");
  }
    cout<<"\n\nLA MATRIZ QUE SE CREO QUEDA ASI:: "<<endl;
	for (size_t i{0};i<filas;i++){
		for (size_t j{0};j<columnas;j++){
			cout<<" "<<matriz[i][j];
		}
		cout<<endl;
		}
    return 0;
}
