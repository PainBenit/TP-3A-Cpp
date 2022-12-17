#pragma once 
#include <iostream>
#include <vector>

class Lecteur
{
public:

	Lecteur(std::string ID, std::string nom, std::string prenom, std::vector<double> Liste_Emprunt);
	std::string getID();
	std::string getFullname();;
	std::vector<double> getListe_Emprunt();
	void setID(std::string ID);
	void setFullname(std::string nom, std::string prenom);
	void setListe_Emprunt(std::vector<double> Liste_Emprunt);

private:

	std::string _ID;		
	std::string _nom;
	std::string _prenom;
	std::vector <double> _Liste_Emprunt;
};
