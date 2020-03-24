#pragma once
#include "Film.h"
#include "auxiliar.h"
#include "Repo.h"

class Service
{
private:
	Repo& repo;

public:

	Service(Repo& repo) : repo{ repo } {}

	/*
	Adauga un nou student.
	Input:
	- varsta: varsta studentului.
	- nume: numele studentului.
	Output: -
	*/
	void addFilm(char* titlul, double data_lansarii, char* genul);
	void updateFilm(char* titlul, double data_lansarii, char* genul);
	void deleteFilm(char* titlul);

	/*
	Determina numarul de studenti.
	Input: -
	Output: numarl de studenti existenti.
	*/
	//int getNrStudenti();

	/*
	Determina toti studentii a caror nume contine un sir de caractere.
	Input:
	- sirCautat: sirul cautat.
	Output:
	- un vector cu sirul rezultat prin filtrare.
	*/

	//VectorDinamic getCuSirInNume(const char* sirCautat);
	Film* getAll();
};