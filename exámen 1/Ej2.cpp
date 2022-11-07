#include <iostream>

using namespace std;

bool ft_procesarDato(int num){
	bool diabolico = false;
    int resto = 0;
    int cnt = 0;
	while (num > 10 || cnt == 2)
	{
		resto = num % 10;
		if (resto == 6)
            cnt++;
        else
			cnt = 0;
        num = num / 10;
	}
    if(cnt == 3){
        diabolico = true;
    }
    return diabolico;
}

void ft_solucion(bool diabolico){
    if (diabolico == true)
		cout << "SI Diabolico " << endl;
	else
		cout << "NO es diabolico " << endl;
}

void ft_leerDato(int& num){
    cout << "Indique un numero (>=): ";
    cin >> num;
    while(num < 0){
        cout << "Indique un numero (>=): ";
        cin >> num;
    }
}

int	main()
{
    int num;
	ft_leerDato(num);
	ft_solucion(ft_procesarDato(num));
	return (0);
}
