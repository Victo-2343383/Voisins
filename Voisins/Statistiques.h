#pragma once

#include <vector>

namespace Statistiques
{
	/// <summary>
	/// Fait la moyenne des valeurs donnés en divisant le total calculé dans une loop for par le compte
	/// </summary>
	/// <param name="liste">La liste à analyser pour faire la moyenne</param>
	/// <returns>La moyenne</returns>
	float Moyenne(std::vector<float> liste);

	/// <summary>
	/// Trouve la médianne. Prends le chiffre du millieu si le compte est impair et fait
	/// une moyenne des chiffres au millieu si le compte est pair
	/// </summary>
	/// <param name="liste">La liste à analyser pour trouver une valeur médiane</param>
	/// <returns>La valeur médiane</returns>
	float Mediane(std::vector<float> liste);

	/// <summary>
	/// Trouve l'écart type en faisant la moyenne, soustrayant chaque chiffre à la moyenne, prendre la valeur absolue de la réponse et faire un total. Le total est divisé par le compte -1 et le résultat est mis à la racine carré.
	/// </summary>
	/// <param name="liste">La liste à analyser pour trouver l'écart type</param>
	/// <returns>L'écart type</returns>
	float EcartType(std::vector<float> liste);
	
	/// <summary>
	/// Fait un théorème de pythagore extensible pour trouver la distance entre deux ou plusieurs points
	/// </summary>
	/// <param name="liste">Les nombres sur lesquels effectuer les opérations</param>
	/// <returns>la distance du point 1 à l'autre point</returns>
	float DistEuclidienne(std::vector<float> liste);
	
	//float DistManhattan(std::vector<float> liste);
};
