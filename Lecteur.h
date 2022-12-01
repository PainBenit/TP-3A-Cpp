#include <iostream>
#include <vector>

class Lecteur
{
public:

	Lecteur(std::string ID, std::string nom, std::string prenom, std::vector<double> Liste_Emprunt);
	std::string getID();
	std::string getNom();
	std::string getPrenom();
	std::vector<double> getListe_Emprunt();

private:

	std::string _ID;		
	std::string _Nom;
	std::string _Prenom;
	std::vector <double> _Liste_Emprunt;
};
