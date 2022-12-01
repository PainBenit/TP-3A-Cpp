#include <iostream>
#include "Date.h"

class Auteur
{
public:

	Auteur(std::string ID, std::string nom, std::string prenom, Date DateNaissance);
	std::string getID();
	std::string etPrenom();
	std::string getDateNaissance();

private:

	std::string _ID;
	std::string _nom;
	std::string _prenom;
	Date _DateNaissance
};

