#pragma once
#include <iostream>
#include "Livre.h"
#include "Date.h"

Livre::Livre(Auteur auteur, std::string titre, std::string langue, std::string genre, Date DatePublication, double ISBN, std::vector<std::string> liste_ID) :
	_auteur(auteur), _titre(titre), _langue(langue), _genre(genre), _datePublication(DatePublication), _ISBN(ISBN), _liste_ID(liste_ID), disponibilite(0) {}

Auteur Livre::getAuteur()
{
	return _auteur;
}

std::string Livre::getTitre() 
{
	return _titre;
}

std::string Livre::getLangue()
{
	return _langue;
}

std::string Livre::getGenre() 
{
	return _genre;
}

std::array <int, 3> Livre::getDatePu()
{
	return _datePublication.Date::getArrayDate();
}

double Livre::getISBN()
{
	return _ISBN;
}

std::vector <std::string> Livre::getListe_ID()
{
	return _liste_ID;
}
bool Livre::isdispo()
{
	return disponibilite;
}
void Livre::setdispo()
{
	if (disponibilite)
	{
		disponibilite = false;
	}
	else
	{
		disponibilite = true;
	}
}

void Livre::addID(std::string ID_lecteur)
{
	_liste_ID.push_back(ID_lecteur);
}

std::ostream& operator<<(std::ostream& os, Livre book)
{
	os << book.getTitre() << " " << book.getAuteur() << " " << " " << book.getISBN() << " " << book.getGenre() << " " << book.getLangue();
	return os;
}