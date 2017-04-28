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
		double d1, d2, d3, d4, de;
		double dt1, dt2, dt3;
		double dtt1, dtt2, dtt3;
		double sp1, sp2, p1, p2;
		double A;
		double ha1, hb1, hc1, ha2, hb2, hc2;
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
		d3 = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
		d4 = sqrt((pow((x3 - x2), 2)) + (pow((y3 - y2), 2)));
		d1 = sqrt((pow((x4 - x3), 2)) + (pow((y4 - y3), 2)));
		d2 = sqrt((pow((x1 - x4), 2)) + (pow((y1 - y4), 2)));
		de = sqrt((pow((x4 - x2), 2)) + (pow((y4 - y2), 2)));
		//Distancias de Triangulo 1
		dt1 = d1;
		dt2 = d3;
		dt3 = de;
		//Distancias de Triangulo 2
		dtt1 = d2;
		dtt2 = d4;
		dtt3 = de;
		//Semiperimetros y Perimetros
		sp1 = (dt1 + dt2 + dt3) / 2;
		sp2 = (dtt1 + dtt2 + dtt3) / 2;
		p1 = dt1 + dt2 + dt3;
		p2 = dtt1 + dtt2 + dtt3;
		//Alturas del triangulo 1
		ha1 = (2/d4)*(sqrt(sp1 * ((sp1 - d4) * (sp1 - d4) * (sp1 - d4))));
		hb1 = (2/d1)*(sqrt(sp1 * ((sp1 - d1) * (sp1 - d1) * (sp1 - d1))));
		hc1 = (2/de)*(sqrt(sp1 * ((sp1 - de) * (sp1 - de) * (sp1 - de))));
		//Alturas del triangulo 2
		ha2 = (2/d3)*(sqrt(sp2 * ((sp2 - d3) * (sp2 - d3) * (sp2 - d3))));
		hb2 = (2/d2)*(sqrt(sp2 * ((sp2 - d2) * (sp2 - d2) * (sp2 - d2))));
		hc2 = (2/de)*(sqrt(sp2 * ((sp2 - de) * (sp2 - de) * (sp2 - de))));
		//Area del Trapezoide
		A = ((de * hc1) / 2) + ((de * hc2) / 2);		

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
		cout << " " << endl;

		cout << "Semiperimetro triangulo 1: " << sp1 << endl;
		cout << "Semiperimetro triangulo 2: " << sp2 << endl;
		cout << "Perimetro triangulo 1: " << p1 << endl;
		cout << "Perimetro triangulo 2: " << p2 << endl;
		cout << " " << endl;

		cout << "Las alturas del triangulo 1 miden: " << endl;
		cout << "Altura 1: " << ha1 << endl;
		cout << "Altura 2: " << hb1 << endl;
		cout << "Altura 3: " << hc1 << endl;
		cout << " " << endl;

		cout << "Las alturas del triangulo 2 miden: " << endl;
		cout << "Altura 1: " << ha2 << endl;
		cout << "Altura 2: " << hb2 << endl;
		cout << "Altura 3: " << hc2 << endl;
		cout << " " <<  endl;

		cout << "El area del trapezoide es de: " << A;
		cout << " " << endl;
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

