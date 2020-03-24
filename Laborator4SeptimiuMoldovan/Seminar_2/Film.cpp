#include "Film.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;

Film::Film() {
	this->titlul = NULL;
	this->data_lansarii = 0.0;
	this->genul = NULL;
	
}

Film::Film(char* titlul, double data_lansarii, char* genul)
{
	this->titlul = new char[strlen(titlul) + 1];
	strcpy_s(this->titlul, 1 + strlen(titlul), titlul);
	this->data_lansarii = data_lansarii;
	this->genul = new char[strlen(genul) + 1];
	strcpy_s(this->genul, 1 +strlen(genul), genul);
	//this->varsta = varsta;
}

Film::Film(const Film &s) {
	cout << "copy constructor"<<endl;
	this->titlul = new char[strlen(s.titlul) + 1];
	strcpy_s(this->titlul, 1 + strlen(s.titlul), s.titlul);
	this->data_lansarii = s.data_lansarii;
	this->genul = new char[strlen(s.genul) + 1];
	strcpy_s(this->genul, 1+ strlen(s.genul), s.genul);
	
}



char* Film::getGenul() {
	return this->genul;
}

char* Film::getTitlul() {
	return this->titlul;
}

double Film::getDataLansarii() {
	return this->data_lansarii;
}

void Film::setTitlul(char* name)
{
	if (this->titlul) {
		delete[] this->genul;
	}
	this->titlul = new char[strlen(name) + 1];
	// LA FIECARE strcpy_s, AM INLOCUIT sizeof(s) CU strlen(s) + 1
	strcpy_s(this->titlul, strlen(name) + 1, name);
}

void Film::setNume(char* name)
{
	if (this->genul) {
		delete[] this->genul;
	}
	this->genul = new char[strlen(name) + 1];
	// LA FIECARE strcpy_s, AM INLOCUIT sizeof(s) CU strlen(s) + 1
	strcpy_s(this->genul, strlen(name) + 1, name);
}

void Film::setDataLansarii(double data) {
	this->data_lansarii = data;
}


Film& Film::operator=(const Film& s) {
	this->setNume(s.genul);
	this->setTitlul(s.titlul);
	this->setDataLansarii(s.data_lansarii);
	return *this;
}

bool  Film::compare(Film& c) {
	return ((this->genul == c.genul));
}

bool Film:: operator==(const Film& s) {
	return strcmp(this->genul, s.genul) == 0 && this->data_lansarii == s.data_lansarii && strcmp(this->titlul, s.titlul) == 0;
}

ostream& operator<<(ostream& os, const Film& s)
{
	os << s.genul << " " << s.data_lansarii << " " << s.titlul;
	return os;
}
Film::~Film() {
	if (this->genul) {
		delete[] this->genul;
		this->genul = NULL;
	}
}