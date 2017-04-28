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
                int x1, y1, x2, y2, x3, y3, x4, y4;
		double d1, d2, d3, d4;
		double dt1, dt2, dt3;
		double dtt1, dtt2, dtt3;
		cout << "Ingrese x de la primera coordenada: ";
		cin >> x1;
		cout << "Ingrese y de la primera coordenada: ";
		cin >> y1;
		cout << "Ingrese x de la segunda coordenada: ";
		cin >> x2;
		cout << "Ingrese y de la segunda coordenada: ";
		cin >> y2;
		cout << "Ingrese x de la tercera coordenada: ";
		cin >> x3;
		cout << "Ingrese y de la tercera coordenada: ";
		cin >> y3;
		cout << "Ingrese x de la cuarta coordenada: ";
		cin >> x4;
		cout << "Ingrese y de la cuarta coordenada: ";
		cin >> y4;
		//Distancias de Trapezoide
		d1 = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
		d2 = sqrt((pow((x3 - x2), 2)) + (pow((y3 - y2), 2)));
		d3 = sqrt((pow((x4 - x3), 2)) + (pow((y4 - y3), 2)));
		d4 = sqrt((pow((x1 - x4), 2)) + (pow((y1 - y4), 2)));
		//Distancias de Triangulo 1
		dt1 = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
		dt2 = sqrt((pow((x4 - x2), 2)) + (pow((y4 - y2), 2)));
		dt3 = sqrt((pow((x1 - x4), 2)) + (pow((y1 - y4), 2)));
		//Distancias de Triangulo 2
		dtt1 = sqrt((pow((x2 - x3), 2)) + (pow((y2 - y3), 2)));
		dtt2 = sqrt((pow((x3 - x4), 2)) + (pow((y3 - y2), 2)));
		dtt3 = sqrt((pow((x2 - x4), 2)) + (pow((y2 - y4), 2)));

		cout << "Los puntos son: " << endl;
		cout << "(" << x1 << ", " << y1 << ")" << endl;
		cout << "(" << x2 << ", " << y2 << ")" << endl;
		cout << "(" << x3 << ", " << y3 << ")" << endl;
		cout << "(" << x4 << ", " << y4 << ")" << endl;
		cout << " " << endl;		

		cout << "Los lados del trapezoide miden: " << endl;
		cout << "Lado 1: " << d1 << endl;
		cout << "Lado 2: " << d2 << endl;
		cout << "Lado 3: " << d3 << endl;
		cout << "Lado 4: " << d4 << endl;
		cout << " " << endl;

		cout << "Los lados del triangulo 1 miden: " << endl;
		cout << "Lado 1: " << dt1 << endl;
		cout << "Lado 2: " << dt2 << endl;
		cout << "Lado 3: " << dt3 << endl;
		cout << " " << endl;

		cout << "Los lados del triangulo 2 miden: " << endl;
		cout << "Lado 1: " << dtt1 << endl;
		cout << "Lado 2: " << dtt2 << endl;
		cout << "Lado 3: " << dtt3 << endl;
		cout << " " <<  endl;

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

