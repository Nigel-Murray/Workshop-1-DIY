#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "GPA.h"
#include "File.h"
#include "GPAlist.h"

using namespace std;

FILE *fp;


namespace sdds
{
	
	//opens the corrisponding file and returns a true value if opened
	bool fileOpen(const char file[])
	{
		fp = fopen(file, "r");
		return fp != NULL;
	}

	//closes file
	void fileClose()
	{
		if (fp)
		{
			fclose(fp);
		}
	}

	// reads student name
	bool stuName(char stdName[])
	{
		return fscanf(fp, "%[^,], ", stdName) == 1;
	}

	// reads student number
	bool stuID(int* ID)
	{
		return fscanf(fp, "%d, ", ID) == 1;
	}

	// reads student GPA
	bool stuGPA(double* GPA)
	{
		return fscanf(fp, "%lf\n", GPA) == 1;
	}

}