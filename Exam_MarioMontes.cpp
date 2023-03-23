/// Examenes Mario Montes


#include <iostream>
#include <string.h>
#include <cstdlib>



using namespace std;

int accion = 0;


int main()
{


	cout << "Bienvenido a los Examens de Mario Montes\n";
	cout << "Elige alguna de las siguientes opciones:\n \n";
	cout << "1: Examen Parcial I\n";
	cout << "2: Examen Parcial II\n";
	cout << "3: Examen Parcial III\n";

	cin >> accion;

	switch (accion)
	{

	case 1:

		cout << "Examen del Parcial I\n";

		break;

	case 2:

		cout << "Examen del Parcial II\n";


		break;

	case 3:

		cout << "Examen del Parcial III\n";

		break;

	default: cout << "Opcion No Valida\n";


	}


	cout << "Gracias por consultar los Examenes de Mario Montes\n";

	return 0;


}

