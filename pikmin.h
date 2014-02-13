#ifndef PIKMIN_H
#define PIKMIN_H

#include <random>
#include <vector>
#include <string>

struct Color
{
	Color(int i = 0) {
		switch (i) {
			case 0: c = "Red"; break;
			case 1: c = "Blue"; break;
			case 2: c = "Yellow"; break;
			case 3: c = "Purple"; break;
			case 4: c = "White"; break;
			case 5: c = "Rock"; break;
			case 6: c = "Winged"; break;
			default: c = "Red"; break;
		}
	}
	std::string &operator()() { return c; }
	
	std::string c;
};

class Pikmin
{
  public:
	Pikmin();

	static void initNamelist(std::string const& filename = "namelist.txt");
	
	std::string name;
	Color color;

  private:	
	static std::vector<std::string> namelist;
	static std::mt19937 rng;
};

#endif //PIKMIN_H
