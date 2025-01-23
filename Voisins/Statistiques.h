#pragma once

#include <vector>

namespace Statistiques
{
	/// <summary>
	/// Fait la moyenne des valeurs donn�s en divisant le total calcul� dans une loop for par le compte
	/// </summary>
	/// <param name="liste">La liste � analyser pour faire la moyenne</param>
	/// <returns>La moyenne</returns>
	float Moyenne(std::vector<float> liste);

	/// <summary>
	/// Trouve la m�dianne. Prends le chiffre du millieu si le compte est impair et fait
	/// une moyenne des chiffres au millieu si le compte est pair
	/// </summary>
	/// <param name="liste">La liste � analyser pour trouver une valeur m�diane</param>
	/// <returns>La valeur m�diane</returns>
	float Mediane(std::vector<float> liste);

	/// <summary>
	/// Trouve l'�cart type en faisant la moyenne, soustrayant chaque chiffre � la moyenne, prendre la valeur absolue de la r�ponse et faire un total. Le total est divis� par le compte -1 et le r�sultat est mis � la racine carr�.
	/// </summary>
	/// <param name="liste">La liste � analyser pour trouver l'�cart type</param>
	/// <returns>L'�cart type</returns>
	float EcartType(std::vector<float> liste);
	
	/// <summary>
	/// Fait un th�or�me de pythagore extensible pour trouver la distance entre deux ou plusieurs points
	/// </summary>
	/// <param name="liste">Les nombres sur lesquels effectuer les op�rations</param>
	/// <returns>la distance du point 1 � l'autre point</returns>
	float DistEuclidienne(std::vector<float> liste);
	
	//float DistManhattan(std::vector<float> liste);
};
