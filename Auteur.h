#pragma once
#include <iostream>
#include "Date.h"

class Auteur
{
public:
	Auteur();
	Auteur(std::string ID, std::string nom, std::string prenom, Date DateNaissance);
	std::string getID();
	std::string getFullname();
	std::array <int,3> getDateNaissance();
	void setDate(int day, int month, int year);
	void setFullname(std::string nom, std::string prenom);
	void setID(std::string ID);
	friend std::ostream& operator<<(std::ostream& os, Auteur author);

private:

	std::string _ID;
	std::string _nom;
	std::string _prenom;
	Date _DateNaissance;
};

