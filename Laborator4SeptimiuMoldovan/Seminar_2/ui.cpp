//#include "stdafx.h"
#include "ui.h"
#include "Repo.h"
//#include "stdafx.h"
#include "ui.h"
#include <iostream>
#include <vector>

using namespace std;

void Ui::showMenu()
{
	cout << "1. Afisare toate filmele " << endl;
	cout << "2. Adauga film" << endl;
	cout << "3.Stergere film" << endl;
	cout << "4.Update film" << endl;
	cout << "5. Iesire" << endl;
}

vector< int > arr;

void Ui::run()
{
	while (true)
	{
		showMenu();
		
		char optiune;
		Film* rez;
		//VectorDinamic rez;
		cout << "Optiune: "; cin >> optiune;

		switch (optiune)
		{
		case '1':
			rez = service.getAll();
			for (int i = 0; i < arr.size(); ++i)
			{
				cout << i + 1 << ". " << rez[i].getTitlul() << " - " << rez[i].getDataLansarii() << " - " << rez[i].getGenul() << endl;// << rez[i].getVarsta() << endl;
			}
			break;

		case '2':
			
			//int varsta;
			char genul[30];
			char titlul[30];
			double data;
			//cout << "Varsta: ";  cin >> varsta;
			cout << "Titlul filmului: "; cin >> titlul;
			cout << "Genul filmului"; cin >> genul;
			cout << "Data lansarii filmului"; cin >> data;
			service.addFilm(titlul, data, genul);
			arr.push_back(1);
			
			break;
		case '3':
			char titlul1[30];
			char genul1[30];
			double data_lansarii1;
			cout << "Dati filmul de sters" << endl;
			cout << "Dati titlul" << endl;
			cin >> titlul1;/*
			cout << "Dati genul" << endl;
			cin >> genul1;
			cout << "Dati data lansarii" << endl;
			
			cin >> data_lansarii1;*/
			//Film f(titlul1, data_lansarii1, genul1);
			service.deleteFilm(titlul1);
			
			break;
		case '4':
			//int varsta;
			
			/*
			//cout << "Varsta: ";  cin >> varsta;
			cout << "Titlul filmului: "; cin >> titlul2;
			cout << "Genul nou al filmului"; cin >> genul2;
			cout << "Data noua a lansarii filmului"; cin >> data2;*/
			//service.updateFilm(titlul, genul , data);
			//arr.push_back(1);
			
			break;
			/*
		case '2':
			char sir[30];
			cout << "Dati sirul: "; cin >> sir;
			rez = service.getCuSirInNume(sir);
			cout << "Studentii cu " << sir << " in nume sunt: " << endl;
			for (int i = 0; i < rez.getLungime(); ++i)
			{
				cout << i + 1 << ". " << rez[i].getNume() << " - " << rez[i].getVarsta() << endl;
			}
			break;
			*/
		
		case '5':
			return;
		default:
			cout << "Comanda invalida!" << endl;
		}
	}
}