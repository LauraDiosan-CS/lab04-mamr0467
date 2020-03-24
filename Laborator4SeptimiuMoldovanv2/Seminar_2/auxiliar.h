#pragma once
#include "Film.h"
class auxiliar
{
private:
	Film* vector;
	int capacitate;
	int lungime;
	void asiguraCapacitate();
public:
	auxiliar();
	auxiliar(const auxiliar& other);
	~auxiliar();
	int getLungime();
	void add(const Film& s);
	Film& operator[](int pozitie);
	auxiliar& operator=(const auxiliar& other);
};
