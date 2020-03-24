#include "Repo.h"
#include "auxiliar.h"

Repo::Repo() {
	this->size = 0;
}

void Repo::addFilm(Film s) {
	this->film[this->size++] = s;
}

int Repo::findElem(Film s) {
	int i = 0;

	while (i < size) {
		if (elem[i] == s) return i;
	}
	return -1;
}

void Repo::deleteFilm(Film s) {
	int i = findElem(s);
	if (i != -1)
		elem[i] = elem[size - 1];
	size = size - 1;
}

int Repo::dim() {
	return size;
}
/*
void Repo::updateFilm(Film s, char* v, char* n, double v) {
	int i = findElem(s);
	elem[i].setTitlul(v);
	elem[i].setNume(n);
	elem[i].setDataLansarii(v);

}*/
/*
void Repo::deleteFilm(char* titlul) {
	for (int i = 0; i < n; i++)
		if (film[i].getTitlul() == titlul) {
			for (int j = i; j < n; j++)
			{
				film[j] = film[j + 1];
			}
			n = n - 1;
		}*/
	/*if (this->titlul) {
		delete[] this->titlul;
		this->titlul = NULL;
	}*/
/*}*/
/*
VectorDinamic Repo::getAll() {
	return this->elem;
}
*/
//Film& Film::operator=(const Film& f) {
/*void Repo::updateFilm(Film f){
	for (int i=0; i<n; i++)
		if (film[n].getTitlul() == f.getTitlul())
			this->film[this->n] = f;
}*/

Film* Repo::getAll() {
	return this->film;
}

Repo::~Repo() {
	this->size = 0;
}


