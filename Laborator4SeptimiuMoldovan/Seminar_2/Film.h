#pragma once
#include <ostream>
using namespace std;

class Film {
private:
	char* genul;
	char* titlul;
	double data_lansarii;
public:
	Film();
	Film(char* titlu, double data_lansarii, char* genul);
	Film(const Film& s);
	~Film();
	char* getGenul();
	char* getTitlul();
	double getDataLansarii();
	void setNume(char* nume);
	void setTitlul(char* nume);
	void setDataLansarii(double data);
	Film& operator=(const Film& s);
	bool operator==(const Film& s);
	bool compare(Film& c);
	friend ostream& operator<<(ostream& os, const Film& s);
};
