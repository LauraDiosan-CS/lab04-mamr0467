//#include "stdafx.h"
#include "service.h"
#include "auxiliar.h"
#include <string.h>

void Service::addFilm(char* titlul, double data_lansarii, char* genul)
{
	Film st(titlul, data_lansarii, genul);
	this->repo.addFilm(st);
}
/*
void Service::updateFilm(char* titlul, double data_lansarii, char* genul)
{
	Film st(titlul, data_lansarii, genul);
	this->repo.updateFilm(st, genul, data_lansarii);

}*/

void Service::deleteFilm(char* titlul) {
	int n = repo.dim();
	Film f[20];
	for (int i = 0; i < n; i++) {
		if (strstr(f[i].getTitlul(), titlul))
		{
			this->repo.deleteFilm(f[i]);
		}
	}
	
	
	/*
	Film st(titlul, data_lansarii, genul);
	this->repo.deleteFilm(st);*/
}
//void Service::deleteFilm(char* titlul);

/*
int Service::getNrStudenti()
{
	return this->repo.getLungime();
}*/
Film* Service::getAll() {
	return this->repo.getAll();
}
/*
auxiliar Service::getCuSirInNume(const char* sirCautat)
{
	Film studenti = this->repo.getAll();
	auxiliar rezultat;
	for (int i = 0; i < studenti.dim(); ++i)
	{
		if (strstr(studenti[i].getNume(), sirCautat))
		{
			rezultat.add(studenti[i]);
		}
	}

	return rezultat;
}*/
