#include <iostream>
#include "Lecteur.h"

Lecteur::Lecteur(std::string ID, std::string nom, std::string prenom, std::vector<double> Liste_Emprunt):
	_ID(ID), _nom(nom), _prenom(prenom), _Liste_Emprunt(Liste_Emprunt){}


std::string Lecteur::getID()
{
	return _ID;
}


std::string Lecteur::getFullname()
{
	std::string Name = _nom + " " + _prenom;
	return Name;
}


std::vector<double> Lecteur::getListe_Emprunt()
{
	return _Liste_Emprunt;
}

void Lecteur::setID(std::string ID)
{
	_ID = ID;
}
void Lecteur::setFullname(std::string nom, std::string prenom)
{
	_nom = nom;
	_prenom = prenom;
}
void Lecteur::setListe_Emprunt(std::vector<double> Liste_Emprunt)
{
	_Liste_Emprunt = Liste_Emprunt;
}