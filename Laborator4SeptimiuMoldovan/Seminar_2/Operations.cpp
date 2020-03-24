#include "Operations.h"
#include "auxiliar.h"
#include <string.h>
/*
//void filterStudents(Student students[], int n, char* name, int varsta, Student result[], int& resultLen)
void filterStudents(Student students[], int n, char* name, int varsta, Student result[], int& resultLen)
{
	resultLen = 0;
	for (int i = 0; i < n; i++)
	{
		if (strstr(students[i].getName(), name) != 0 && students[i].getVarsta() > varsta)
		{
			result[resultLen++] = students[i];
		}
	}
}

void filterStudentsWithRepo(Repo repo, int n, char* name, int varsta, Student result[], int& resultLen)
{
	resultLen = 0;
	//Student* initialStudents = repo.getAll();
	VectorDinamic initialStudents = repo.getAll();
	return filterStudents(initialStudents, n, name, varsta, result, resultLen);
}
*/