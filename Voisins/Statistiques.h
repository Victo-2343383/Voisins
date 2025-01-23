#pragma once

#include <vector>

namespace Statistiques
{
	/// <summary>
	/// Fait la moyenne des valeurs donn�s en divisant le total calcul� dans une loop for par le compte
	/// </summary>
	/// <param name="liste"></param>
	/// <returns></returns>
	float Moyenne(std::vector<float> liste);

	/// <summary>
	/// Trouve la m�dianne. Prends le chiffre du millieu si le compte est impair et fait
	/// une moyenne des chiffres au millieu si le compte est pair
	/// </summary>
	/// <param name="liste"></param>
	/// <returns></returns>
	float Mediane(std::vector<float> liste);

	//float EcartType(std::vector<float> liste);
	
	//float DistEuclidienne(std::vector<float> liste);
	
	//float DistManhattan(std::vector<float> liste);
};
