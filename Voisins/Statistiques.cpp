#include "Statistiques.h"

float Statistiques::Moyenne(std::vector<float> liste) {
	float total{ 0 };
	int compte{ 0 };
	for (int i{ 0 }; i < liste.size(); i++) {
		total += liste.at(i);
		compte++;
	}
	return total / compte;
};
float Statistiques::Mediane(std::vector<float> liste) {
	//variables
	int length{ (int)liste.size() };


	//connaître si c'est pair ou impair
	int mod = length % 2;

	if (mod == 1) return liste.at(length / 2); //Si impair, retourne le chiffre au milieu
	else return (							//sinon retourner la moyenne des chiffres qui contestent le millieu
		liste.at(length / 2 - 1)
		+
		liste.at(length / 2)
		)/2; 
};
