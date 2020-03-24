#include "auxiliar.h"

auxiliar::auxiliar()
{
	this->capacitate = 5;
	this->lungime = 0;
	this->vector = new Film[this->capacitate];
}

auxiliar::auxiliar(const auxiliar& other)
{
	this->capacitate = other.capacitate;
	this->lungime = other.lungime;
	this->vector = new Film[this->capacitate];
	for (int i = 0; i < this->lungime; ++i)
	{
		this->vector[i] = other.vector[i];
	}
}


void auxiliar::asiguraCapacitate()
{
	if (lungime == capacitate)
	{
		capacitate *= 2;
		Film* vectorNou = new Film[capacitate];
		for (int i = 0; i < lungime; ++i)
		{
			vectorNou[i] = vector[i];
		}
		delete[] vector;
		vector = vectorNou;
	}
}

void auxiliar::add(const Film& s)
{
	asiguraCapacitate(); // sau this->asiguraCapacitate()
	this->vector[this->lungime++] = s;
}

int auxiliar::getLungime()
{
	return lungime;
}

auxiliar::~auxiliar()
{
	delete[] vector;
}

Film& auxiliar::operator[](int pozitie)
{
	// TODO: validarea pozitiei!
	return this->vector[pozitie];
}

auxiliar& auxiliar::operator=(const auxiliar& other)
{
	if (this != &other)
	{
		delete[] this->vector;
		this->capacitate = other.capacitate;
		this->lungime = other.lungime;
		this->vector = new Film[this->capacitate];
		for (int i = 0; i < this->lungime; ++i)
		{
			this->vector[i] = other.vector[i];
		}
	}

	return *this;
}
