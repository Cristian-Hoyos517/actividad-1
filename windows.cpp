# include <iostream>
# include <windows.h> 
using namespace std;
main()
{
setlocale (LC_CTYPE,"Spanish");
int elementos;
cout << "Digite el número 1 para utilizar enteros. \n";	
cout << "Digite el número 2 para utilizar caracter. \n";
cout << "Digite el número 3 para utilizar reales. \n";
cout << "Digite el número 4 para utilizar cadena. \n";
cout << "Digite el número 5 para utilizar float. \n";	
	
cin >> elementos;	
		
switch (elementos)	
{
case 1: cout << "aquí se utilozan los numeros enteros. \n";
	int patos [5];
	{
	
	patos[1]= 1;
	patos[3]= 3;
	patos[0]= 8;
	patos[2]= 27;
	patos[4] = 12;
	
	//cout << patos[2] << " " << endl;
	//cout << patos[0] << endl << endl;
	
	
	for (int i = 0; i <= 4 ; i++)
	{
		cout << patos [i] << endl;
	}
	}
break;
case 2: cout << "aquí se utiliza caracteres. \n";
	{
	
	/*char caracteres [5];
	
	caracteres[0] = 'H';
	caracteres[2] = 'l';
	caracteres[1] = 'o';
	caracteres[4] = 's';
	caracteres[3] = 'a';
	
	for (int p = 0; p <= 4; p = p + 1 )
	{
		cout << caracteres [p] << "\n";
	}*/
	
	{
	char proga [] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', 'a', 'c', 'i', 'ó', 'n', ' ', 'd', 'e', ' ', 'S', 'o', 'f', 't', 'w', 'a', 'r', 'e'};
	
	cout << "\t \t \t \t \t";
	for (int z = 0; z <= 23; z++)
	{
		cout << proga[z];
		Sleep (80);
	}
	}
	
	{
	string prog [] = {"\n", "\t \t \t \t \t", "Buenas tardes, ", "\n" , "\t \t \t \t \t", "Estamos pensando ", " \n" , "\t \t \t \t \t", "Que hoy es viernes ",  "\n" , "\t \t \t \t \t", "Y deberiamos salir ", "\n", "\t \t \t \t \t", "Un poco más temprano ",  "\n", "\t \t \t \t \t", "Si se puede. " };
	
	//cout << "\t \t \t \t \t";
	for (int q = 0; q <= 17; q++)
	{
		cout << prog[q];
		Sleep (80);
	
	}
	}
	}
break;
case 3: cout << "aquí se utiliza reales. \n";
	{
	
	double reales [5];
	reales [0] = 4.1;
	reales [1] = 5.2;
	reales [2] = 4.1;
	reales [3] = 4.1;
	reales [4] = 4.1;
	for ( int g = 0; g <= 4; g++)
	{
		cout << reales [g] << endl;
	}
	}
break;
case 4: cout << "aquí se utiliza cadenas. \n";
	{
	
	string cadena [5] = { "Hola", "Pera", "Casa", "amigo", "mamá"};
	int cad = 0;
	while (cad <= 4 )
	{
		cout << cadena[cad]<< "\n";
		cad = cad + 1;
	}
	}
break;
case 5: cout << "aquí se utiliza float. \n";
	{
	
	float numero[5] = {4.2, 3.4, 3.2, 7.7, 5.7};
	for ( int x = 0; x<= 4; x++ )
	{
		cout << numero[x] << "\n";
	}
	}
	break;
		default: cout <<" hola ";
	break;
	}
}
