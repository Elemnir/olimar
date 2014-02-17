#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include "pikmin.h"

using namespace std;

int main(int argc, char** argv)
{
	Pikmin::initNamelist("namelist.txt");
	Pikmin clyde;
		
	map<string, int> counter;
	for (int i = 0; i < 100000; ++i)
	{
		clyde = Pikmin();
		counter[clyde.color()] += 1;
	}

	for (auto im = counter.begin(); im != counter.end(); ++im)
		cout << setw(10) << left << im->first << right << im->second << endl;

	return 0;
}
