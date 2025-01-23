#include "Statistiques.h"

float Statistiques::Moyenne(std::vector<float> liste) {
	float total{ 0 };
	int compte{ 0 };
	for (int i = 0; i < liste.size(); i++) {
		total += liste.at(i);
		compte++;
	}
	return total / compte;
};
