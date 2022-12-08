#include <iostream>
#include "Livre.h"
#include "Date.h"

Livre::Livre(Auteur auteur, std::string titre, std::string langue, std::string genre, Date DatePublication, double ISBN, std::vector<std::string> liste_ID) :
	_auteur(auteur), _titre(titre), _langue(langue), _genre(genre), _datePublication(DatePublication), _ISBN(ISBN), _liste_ID(liste_ID) {}


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