#include <assert.h>
#include <string.h>
#include "Tests.h"
#include "Operations.h"

#include "Film.h"
#include <assert.h>
#include <iostream>
#include <string>
#include <cstring>
#include "Tests.h"

using namespace std;
/*
void teste2() {
	Film c1 = Film();
	assert(c1.getGenul() == NULL);
	

	char* x = new char[10];
	strcpy_s(x, 4, "gaz");
	Film c2 = Film(x);
	assert(strcmp(c2.getGenul(), x) == 0);
	
	Film c3 = Film(c2);
	assert(strcmp(c3.getGenul(), "gaz") == 0);
	
	assert(c2.compare(c3) == true);

	cout << "teste cheltuieli" << endl;
}

/*
void testFilterStudents() {
	Student students[5];
	char* nume1 = new char[10];
	char* nume2 = new char[10];
	char* nume3 = new char[10];
	char* nume4 = new char[10];
	char* nume5 = new char[10];
	strcpy_s(nume1, sizeof "Ion", "Ion");
	Student s1(nume1, 23);

	strcpy_s(nume2, sizeof "Maria", "Maria");
	Student s2(nume2, 14);

	strcpy_s(nume3, sizeof "Carmen", "Carmen");
	Student s3(nume3, 50);

	strcpy_s(nume4, sizeof "Radu", "Radu");
	Student s4(nume4, 30);

	strcpy_s(nume5, sizeof "John", "John");
	Student s5(nume5, 19);

	students[0] = s1;
	students[1] = s2;
	students[2] = s3;
	students[3] = s4;
	students[4] = s5;

	Student result[5];
	int resultLen;

	char* searchedName = new char[10];
	strcpy_s(searchedName, sizeof "ar", "ar");

	filterStudents(students, 5, searchedName, 10, result, resultLen);

	assert(resultLen == 2);
	assert(students[1] == result[0]);
	assert(students[2] == result[1]);
}*/