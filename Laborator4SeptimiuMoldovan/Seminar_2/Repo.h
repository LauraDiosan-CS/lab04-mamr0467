#pragma once
#include "Film.h"
#include "auxiliar.h"

class Repo {
private:
	auxiliar elem;
	Film film[20];
	char* n;
	double v;
	int size;
	char* titlul;
	Film f;
	Film s;
public:
	Repo();
	~Repo();
	int findElem(Film s);
	void addFilm(Film s);
	//void updateFilm(Film f,char* n,double v);
	void deleteFilm(Film s);
	Film* getAll();
	int dim();
	
};