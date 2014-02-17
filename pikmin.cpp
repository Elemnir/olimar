#include "pikmin.h"

#include <random>
#include <fstream>

std::mt19937 Pikmin::rng(std::random_device{}());
std::vector<std::string> Pikmin::namelist;

Pikmin::Pikmin()
{
	std::discrete_distribution<int> disc_dist {8,40,20,8,8,8,8};
	color = Color(disc_dist(rng));

	std::uniform_int_distribution<int> uni_dist(0, namelist.size() - 1);
	name = namelist[uni_dist(rng)];
}

void Pikmin::initNamelist(std::string const& filename) //static
{
	namelist.clear();
	std::ifstream file(filename.c_str());
	std::string val;
	while (getline(file, val))
		namelist.push_back(val);
	file.close();
}
