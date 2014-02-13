#include <iostream>
#include <fstream>
#include <vector>

#include "pikmin.h"

using namespace std;

int main(int argc, char** argv)
{
	Pikmin::initNamelist("namelist.txt");
	Pikmin clyde;
	
	cout << clyde.name << ' ' << clyde.color() << endl;

	return 0;
}
