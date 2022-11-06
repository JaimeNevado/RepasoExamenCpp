#include <iostream>

using namespace std;

int ft_check_spaces(char day);

int	main()
{
	int altura = 5;
	char day;

	cout << "Introduzca el dia que cae el primero del mes: ";
	cin >> day;

	cout << endl;

	cout << "El calendario es el siguiente: " << endl << endl;
	if (day == 'S' || day == 'D')
		altura = 6;

	for(int i = 0; i < ft_check_spaces(day); i++)
	{
		cout << ".. ";
	}
		for (int numero = 1; numero < 32; numero++)
		{
			if (numero < 10)
				cout << "." << numero << " ";
			else
				cout << numero << " ";
			if (((numero + ft_check_spaces(day)) % 7) == 0)
				cout << endl;
		
		}
		cout << endl;
	return (0);
}

int ft_check_spaces(char day)
{
	int space = 0;

	if(day == 'M')
		space = 1;
	if(day == 'X')
		space = 2;
	if(day == 'J')
		space = 3;
	if(day == 'V')
		space = 4;
	if(day == 'S')
		space = 5;
	if(day == 'D')
		space = 6;
	
	return space;
}
