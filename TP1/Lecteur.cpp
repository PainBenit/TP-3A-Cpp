#pragma once
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
void Lecteur::addEmprunt(double ISBN_book)
{
	_Liste_Emprunt.push_back(ISBN_book);
}

std::ostream& operator<<(std::ostream& os, Lecteur reader)
{
	os << reader.getFullname()<<" "<< reader.getID() <<" ";
	return os;
}