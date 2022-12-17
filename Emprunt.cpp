#include <iostream>
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"
#include "Emprunt.h"


Emprunt::Emprunt(Date dateEmprunt, Lecteur Emprunteur, Livre Emprunter):
	_dateEmprunt(dateEmprunt), _Emprunteur(Emprunteur), _Emprunter(Emprunter){}

std::array <int, 3> Emprunt::getDateEmprunt()
{
	return _dateEmprunt.Date::getArrayDate();
}

std::string Emprunt::getEmprunteur()
{
	return _Emprunteur.Lecteur::getID();
}

double Emprunt::getEmprunter()
{
	return _Emprunter.Livre::getISBN();
}

void Emprunt::setDateEmprunt(Date dateEmprunt)
{
	_dateEmprunt = dateEmprunt;
}

void Emprunt::setEmprunteur(Lecteur Empreunteur)
{
	_Emprunteur = Empreunteur;
}

void Emprunt::setEmprunter(Livre Emprunter)
{
	_Emprunter = Emprunter;
}