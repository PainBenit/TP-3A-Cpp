#pragma once
#include<iostream>
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"

class Emprunt
{
public:

	Emprunt(Date dateEmprunt, Lecteur Emprunteur, Livre Emprunter);
	std::array <int,3> getDateEmprunt();
	Lecteur getEmprunteur();
	double getEmprunter();
	void setDateEmprunt(Date dateEmprunt);
	void setEmprunteur(Lecteur Empreunteur);
	void setEmprunter(Livre Emprunter);


private:

	Date _dateEmprunt;
	Lecteur _Emprunteur;
	Livre _Emprunter;
};
