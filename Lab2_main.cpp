#include <iostream>
#include <cmath>

using namespace std;

int factorial(int i);
int menu();

int main(){
    bool salir = false;
    while (!salir){
        switch(menu()){
            case 1:{
                int x;
		double develop = 0;
                cout << "Escriba un número: ";
                cin >> x;
		for (int i = 1; i <= 13; i++){
		    develop += ((pow(x,i)) / (factorial(i)));
		}
		cout << "El resultado es: " << develop + 1 << endl;
                break;}

            case 2:{
                int num1, num2, num3, num4;
		cout << "Ingrese la primera coordenada: ";
		cin >> num1;
		cout << "Ingrese la segunda coordenada: ";
		cin >> num2;
		cout << "Ingrese la tercera coordenada: ";
		cin >> num3;
		cout << "Ingrese la cuarta coordenada: ";
		cin >> num4;

                break;}

            case 3:
                salir = true;
                break;
        }//Fin switch
    }//Fin while

    return 0;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "      MENU" << endl
             << "1.- Ejercicio 1" << endl
             << "2.- Ejercicio 2" << endl
             << "3.- Salir" << endl;

        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 4)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }

    } while(!valido);
    return opcion;
}

int factorial(int i){
    if (i < 0)//validar input
        return -1;
    else if (i == 0) {// fondo de la recursión
        return 1;
    } else {
        return i * factorial(i-1);
    }
    return 0;
}

