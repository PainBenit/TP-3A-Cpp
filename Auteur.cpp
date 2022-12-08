#include <iostream>
#include "Auteur.h"
#include "Date.h"


Auteur::Auteur()
	: _ID(""), _nom(""), _prenom(""), _DateNaissance() {}



Auteur::Auteur(std::string ID, std::string nom, std::string prenom, Date DateNaissance):
	_ID(ID), _nom(nom), _prenom(prenom), _DateNaissance(DateNaissance){}

std::string Auteur::getID()
{
	return _ID;
}

std::string Auteur::getFullname()
{
	std::string Name = _prenom + " " + _nom;
	return Name;
}

std::array <int, 3> Auteur::getDateNaissance()
{
	return _DateNaissance.Date::getArrayDate();
}

void Auteur::setDate(int day,int month,int year)
{
	_DateNaissance.setDate(day, month, year);
}

void Auteur::setFullname(std::string nom, std::string prenom)
{
	_nom = nom;
	_prenom = prenom;
}

void Auteur::setID(std::string ID)
{
	_ID = ID;
}