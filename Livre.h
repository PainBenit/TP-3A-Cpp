#pragma once
#include<iostream>
#include "Date.h"
#include<vector>
#include "Auteur.h"

class Livre
{

private:

	Auteur _auteur;
	std::string _titre;
	std::string _langue;
	std::string _genre;
	Date _datePublication;
	double _ISBN;
	std::vector <std::string> _liste_ID;
	bool disponibilite;
public:

	Livre(Auteur auteur, std::string titre, std::string langue, std::string genre, Date DatePublication, double ISBN, std::vector<std::string> liste_ID);
	Auteur getAuteur();
	std::string getTitre();
	std::string getLangue();
	std::string getGenre();
	std::array <int, 3> getDatePu();
	double getISBN();
	std::vector <std::string> getListe_ID();
	void addID(std::string ID_lecteur);
	bool isdispo();
	void setdispo();
	friend std::ostream& operator<<(std::ostream& os, Livre book);

};
